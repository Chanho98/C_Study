#include <stdio.h>


int main()
{
	int x[] = {1, 3, 5, 7, 9};
	int* ptr = x;

	printf("\n\n\tPOV Operator at Pointer\n");
	printf("---------------------------------------------------------------------------------------------------------\n");

	printf("Address of Integer     :%p \n", ptr);
	printf("Value of Pointer       :%d \n", *ptr);

	printf("\nOperating *++ptr\n");
	printf("Result                 :%d\n", *++ptr);
	printf("Address of Integer     :%p \n", ptr);
	printf("Value of Pointer       :%p -> JUNK \n", *ptr);

	printf("\nOperating ++*ptr\n");
	printf("Result                 :%d\n", ++*ptr);
	printf("Address of Integer     :%p\n", ptr);
	printf("Value of Pointer       :%d\n", *ptr);

	printf("\nOperating *ptr++\n");
	printf("Result                 :%d\n", *ptr++);
	printf("Address of Integer     :%p\n", ptr);
	printf("Value of Pointer       :%d\n", *ptr);

	printf("\nOperating (*ptr)++\n");
	printf("Result                 :%d\n", *ptr++);
	printf("Address of Integer     :%p\n", ptr);
	printf("Value of Pointer       :%d\n", *ptr);

	return 0;
}
