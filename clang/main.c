#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv) 
{
	double d;
	uint64_t* p64 = (uint64_t*)&d;
	FILE* fp = fopen("test.txt", "w");

	printf("Hello, UEFI on CLANG! %d %p FILE* %p\n", argc, malloc(1024 * 1024), fp);

	d = cos(0);	
	wprintf(L"cos(0) -> %016llX \n", *p64);


	return 0;
}