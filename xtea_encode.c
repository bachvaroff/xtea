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

	for (j = 0; j < 2; j++) {
		vv = htonl(v[j]);
		for (k = 0; k < 4; k++) {
			t = ((unsigned char *)&vv)[k];
				printf("%c%c", hex[(t & 0xf0u) >> 4u], hex[t & 0x0fu]);
		}
		printf("\n");
	}
	
	return;
}

int main(int argc, char *argv[]) {
	uint32_t v[2] = { 0u, 0u };
	uint32_t key[4] = { 0u, 0u, 0u, 0u };
	uint8_t *data, d;
	size_t j, k;
	size_t len, len8;
	int endian;
	
	endian = (0x12345678u != htonl(0x12345678u));
	
	if (argc == 6) {
		sscanf(argv[1], "%x", &key[0]);
		sscanf(argv[2], "%x", &key[1]);
		sscanf(argv[3], "%x", &key[2]);
		sscanf(argv[4], "%x", &key[3]);
		data = (uint8_t *)argv[5];
	} else if (argc == 2) {
		data = (uint8_t *)argv[1];
	} else exit(1);
	
	len = strlen(data);
	len8 = (len | 7u) + 1u;
	
	if (!endian)
		for (j = 0u; j < 4u; j++)
			key[j] = htonl(key[j]);
	
	fprintf(stderr, "-------- ENCODE BEGIN stderr --------\n");
	fflush(stderr);
	
	fflush(stdout);
	for (j = 0u; j < len8; j++) {
		if (j < len) d = data[j];
		else d = '\0';
		
		k = j & 7u;
		
		if (k < 4u) v[0] |= d << (k << 3u);
		else v[1] |= d << ((k - 4u) << 3u);
		
		if (k == 7u) {
			if (!endian) {
				v[0] = htonl(v[0]);
				v[1] = htonl(v[1]);
			}
			encipher(256u, v, key);
			dump(v);
			v[0] = v[1] = 0u;
		}
	}
	fflush(stdout);
	
	fprintf(stderr, "-------- ENCODE END stderr --------\n");
	fflush(stderr);
	
	return 0;
}

