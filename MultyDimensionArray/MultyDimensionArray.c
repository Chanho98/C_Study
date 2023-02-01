#include <stdio.h>

int main()
{
	int arr2[3][4] = { 1, 3, 5, 7, 11, 13, 15, 17, 21, 23, 25, 27 };
	int(*ptr)[4] = arr2;   // Pointer for Array which have 4 integer

	printf("\n\n\tPOV Multy Dimension Pointer\n");
	printf("---------------------------------------------------------------------------------------------------------\n");
	printf("Address of first index             :%p \n", arr2);
	printf("%p\n", ptr);
	printf("%p\n", ptr + 1);
	printf("%p\n", ptr[2]);
	printf("Way to print 15                    :%d\n", *(*(ptr + 1) + 2));


    // Array[Row][Colm] -> 3 * 4 Matrix
    int arr[3][4] = { 1, 3, 5, 7, 11, 13, 15, 17, 21, 23, 25, 27 };

	printf("\n\n\tPOV Multy Dimension Array\n");
	printf("---------------------------------------------------------------------------------------------------------\n");

	printf("arr[3][4] = { [1, 3, 5, 7], [11, 13, 15, 17], [21, 23, 25, 27] } Have 3 index Array\n\n");
	printf("Address of first index             :%p \n", arr);		  // type 1
	printf("Value of Pointer format1           :%d \n", **arr);
	printf("Value of Pointer format2           :%d \n", *arr[0]);
	printf("Address + 1  increase along row Lv :%p \n", arr + 1);
	printf("Value of Pointer                   :%d \n", **(arr + 1));  // *(ptr + 1) = ptr[1]
	printf("\n");
	
	printf("Address of whole Array             :%p \n", &arr);		  // type 1
	printf("Value of Pointer                   :%d \n", **arr);
	printf("Address + 1  Next Pointer of Array :%p \n", &arr + 1);
	printf("Value of Pointer                   :%d -> Junk \n", *(&arr + 1));  // *(ptr + 1) = ptr[1]
	printf("\n");


	/*
	printf("\nOperating *++ptr\n");
	printf("Result                 :%d\n", *++ptr);
	printf("Address of Integer     :%p \n", ptr);
	printf("Value of Pointer       :%p -> JUNK \n", *ptr);
	*/


}
