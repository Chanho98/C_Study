# C Pointer & Array
배열의 포인터 크기는 8 Byte라 생각한다.
## 포인터와 배열의 차이
1. 포인터는 L-Value 이므로 변경이 가능하다.
```
	char* s = "Jane";
	s = "change";
```
2. 배열은 L-Value가 아니므로 변경이 불가능하다.
```
	char arr[] = "James";
	arr = "Katie"
```
**배열의 식별자 사용의 세가지 용도**
**1. 첫번째 원소의 포인터**
```
	int arr_num[] = {0, 1, 2, 3, 4,  5 ,6 ,7, 8, 9};
		printf("\tAddress of first index in Array :%p\n", arr_num);
	printf("\tIdentitier + 1                  :%p\n", arr_num + 1);		// Plus as sizeof DataType

    $ Result [ A00, A04]
```
**2. 배열 전체의 바이트 수**
```
	printf("\tSize of Array     < 10 * 4 >    :%d\n", sizeof(arr_num));
	$ Result [ 40 ]
```
**3. 배열 자체의 포인터**
```
	printf("\tAddress of Array                :%d\n", &arr_num);
	printf("\tAdrress of Array + 1            :%p\n", &arr_num + 1);
	$ Result [ 152 -> 192 ] 배열 다음 포인터 주로를 Return
```
