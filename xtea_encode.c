#include <sys/types.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void encipher(unsigned int num_rounds, uint32_t *v, uint32_t *key) {
	uint32_t v0 = v[0], v1 = v[1], sum = 0u, delta = 0x9E3779B9u;
	unsigned int i;

	for (i = 0u; i < num_rounds; i++) {
		v0 += (((v1 << 4u) ^ (v1 >> 5u)) + v1) ^ (sum + key[sum & 3u]);
		sum += delta;
		v1 += (((v0 << 4u) ^ (v0 >> 5u)) + v0) ^ (sum + key[(sum >> 11u) & 3u]);
	}
	
	v[0] = v0; v[1] = v1;
	
	return;
}

void dump(uint32_t *v) {
	const static char hex[] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
	};
	uint32_t vv;
	unsigned char t;
	int j, k;
	
	fflush(stdout);
	for (j = 0; j < 2; j++) {
		vv = htonl(v[j]);
		for (k = 0; k < 4; k++) {
			t = ((unsigned char *)&vv)[k];
			fputc(hex[(t & 0xf0u) >> 4u], stdout);
			fputc(hex[t & 0x0fu], stdout);
		}
		fputc(' ', stdout);
	}
	fputc('\n', stdout);
	fflush(stdout);
	
	return;
}

int main(int argc, char *argv[]) {
	uint32_t iv[2] = { 0u, 0u };
	uint32_t key[4] = { 0u, 0u, 0u, 0u };
	uint32_t dv[2], ev[2];
	int endian;
	int TERM;
	int j, id;
	uint8_t d;
	
	endian = (0x01234567u != htonl(0x01234567u));
	
	if (argc == 7) {
		sscanf(argv[1], "%x", &iv[0]);
		sscanf(argv[2], "%x", &iv[1]);
		sscanf(argv[3], "%x", &key[0]);
		sscanf(argv[4], "%x", &key[1]);
		sscanf(argv[5], "%x", &key[2]);
		sscanf(argv[6], "%x", &key[3]);
	}
	
	if (!endian) {
		iv[0] = htonl(iv[0]);
		iv[1] = htonl(iv[1]);
		key[0] = htonl(key[0]);
		key[1] = htonl(key[1]);
		key[2] = htonl(key[2]);
		key[3] = htonl(key[3]);
	}
	
	fprintf(stderr, "-------- ENCODE BEGIN stderr --------\n");
	fflush(stderr);
	
	fflush(stdout);
	for (TERM = 0; !TERM; ) {
		dv[0] = dv[1] = 0u;
		for (j = 0; j < 8; j++) {
			id = fgetc(stdin);
			if (id != EOF) d = (uint8_t)id;
			else {
				d = 0u;
				TERM = 1;
				if (!j) break;
			}
			
			if (j < 4) dv[0] |= d << (j << 3);
			else dv[1] |= d << ((j - 4) << 3);
			
			if (j == 7) {
				if (!endian) {
					dv[0] = htonl(dv[0]);
					dv[1] = htonl(dv[1]);
				}
				ev[0] = iv[0] ^ dv[0];
				ev[1] = iv[1] ^ dv[1];
				encipher(256u, ev, key);
				iv[0] = ev[0] ^ dv[0];
				iv[1] = ev[1] ^ dv[1];
				dump(ev);
			}
		}
	}
	fflush(stdout);
	
	fprintf(stderr, "-------- ENCODE END stderr --------\n");
	fflush(stderr);
	
	return 0;
}
