#include <stdio.h>


int main()
{
	/* Thought Pointer's Size is 8 bytes */

	char* s = "Jane";

	printf("\n\n\tPOV Pointer\n");
	printf("---------------------------------------------------------------------------------------------------------\n");
	printf("\tAddress for Pointer :%p  Address for Pointer :%p \n", s, &s);
	printf("\tPointer + 1         :%p \n", s + 1, &s);
	printf("\tSizeof Char pointer :%d \n", sizeof(s));				// N0.2 Sizeof whole array
	printf("\tPrint String        :%s \n", s);

	printf("\n\tSince Pointer is L-Value, So pointer can be modified\n");
	s = "change";
	printf("\tAddress for Pointer :%p  Address for Pointer :%p \n", s, &s);
	printf("\tPointer + 1         :%p \n", s + 1, &s);
	printf("\tSizeof Char pointer :%d \n", sizeof(s));				// N0.2 Sizeof whole array
	printf("\tPrint String        :%s \n", s);

	printf("\n\tPointer's Address is not Modified, but String's Address is changed\n");


	char arr[] = "James";
	printf("\n\n\tPOV Array\n");
	printf("---------------------------------------------------------------------------------------------------------\n");
	printf("\tPrint String        :%s  -> Can't not be Modified \n\n", arr);
	/* Since Array is Not L-Value, Can't modify
	arr = "Katie"
	printf("\tPrint String        :%s \n", arr);
	*/

	int arr_num[] = { 0, 1, 2, 3, 4,  5 ,6 ,7, 8, 9 };
	printf("\tAddress of first index in Array :%p\n", arr_num);
	printf("\tIdentitier + 1                  :%p\n", arr_num + 1);		// Plus as sizeof DataType

	printf("\tSize of Array     < 10 * 4 >    :%d\n", sizeof(arr_num));

	printf("\tAddress of Array                :%d\n", &arr_num);
	printf("\tAdrress of Array + 1            :%p\n", &arr_num + 1);

	return 0;
}
