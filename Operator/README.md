## C 연산자
`int x[] = {1, 3, 5, 7, 9};`
* *++ptr 연산 
1. pointer의 주소값에 1을 증감시킨다.
2. 증감된 포인터의 값을 *로 Indirect 한다.
3. Pointer가 1을 가리키고 있었다면, 2를 가리키게 되고 3을 출력한다.
> 1st ++a 연산 실행, 2nd * indirect 연산 실행

* ++*ptr 연산
1. ptr가 현재 가리키는 3을 Indirect한다.
2. Indirect한 Array의 3 값을 4로 증가시킨다.
> 1st * indrect 연산 실행, 2nd ++a 연산 실행

* *ptr++
1. ptr++ 연산이 실행되며 코드 실행 후 1을 증가시킴
2. 증가하기 이전의 현재 값을 Indirect 함
> 1st a++ 연산 실행, 2nd 증감되기 이전 값 indirect
