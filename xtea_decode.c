#include <sys/types.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void decipher(unsigned int num_rounds, uint32_t *v, uint32_t *key) {
	uint32_t v0 = v[0], v1 = v[1], delta = 0x9E3779B9U, sum = delta * num_rounds;
	unsigned int i;
	
	for (i = 0u; i < num_rounds; i++) {
		v1 -= (((v0 << 4u) ^ (v0 >> 5u)) + v0) ^ (sum + key[(sum >> 11u) & 3u]);
		sum -= delta;
		v0 -= (((v1 << 4u) ^ (v1 >> 5u)) + v1) ^ (sum + key[sum & 3u]);
	}
	
	v[0] = v0; v[1] = v1;
	
	return;
}

void print(uint32_t *v) {
	uint32_t vv;
	int j, k;
	
	for (j = 0; j < 2; j++) {
		vv = htonl(v[j]);
		for (k = 0; k < 4; k++)
			fputc(((unsigned char *)&vv)[3 - k], stdout);
	}
	
	return;
}

int main(int argc, char *argv[]) {
	uint32_t v[2] = { 0u, 0u };
	uint32_t key[4] = { 0u, 0u, 0u, 0u };
	int endian, j;
	
	endian = (0x01234567u != htonl(0x01234567u));
	
	if (argc == 5) {
		sscanf(argv[1], "%x", &key[0]);
		sscanf(argv[2], "%x", &key[1]);
		sscanf(argv[3], "%x", &key[2]);
		sscanf(argv[4], "%x", &key[3]);
	}
	
	if (!endian)
		for (j = 0; j < 4; j++)
			key[j] = htonl(key[j]);
	
	fprintf(stderr, "-------- DECODE BEGIN stderr --------\n");
	fflush(stderr);
	
	fflush(stdout);
	while (1) {
		if (fscanf(stdin, "%x", &v[0]) != 1) break;
		if (fscanf(stdin, "%x", &v[1]) != 1) break;
		
		if (!endian) {
			v[0] = htonl(v[0]);
			v[1] = htonl(v[1]);
		}
		
		decipher(256u, v, key);
		print(v);
	}
	fflush(stdout);
	
	fprintf(stderr, "\n-------- NEW LINE stderr --------\n");
	fprintf(stderr, "-------- DECODE END stderr --------\n");
	fflush(stderr);
	
	return 0;
}

