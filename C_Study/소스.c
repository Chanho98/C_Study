#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	char c = 'c';
	double d = 0.0;
	float f = 0.1;

	printf("\n\n\tData Type Size\n");
	printf("-----------------------------------\n");


	printf("\tchar   Size  %d\n", sizeof(c));	    // char   Size 1
	printf("\tint    Size  %d\n", sizeof('0'));		// int    Size 4  '0' Char code number size int
	printf("\tint    Size  %d\n", sizeof(5));		// int    Size 4
	printf("\tfloat  Size  %d\n", sizeof(f));		// float  Size 4
	printf("\tdouble Size  %d\n", sizeof(d));		// double Size 8


	return 0;
}