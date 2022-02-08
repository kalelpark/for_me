#include <stdio.h>

//void swap(int a, int b);
//void swap_addr(int *a, int *b);
//void changeArray(int* ptr);
int mainzxzxzxzweqdsadxz(void)
{
	//// 배열과 포인터의 관계
	//int arr[3] = { 5, 10, 15 };
	//// ptr이라는 포인터 변수에 arr 3의 크기만큼의 배열을 저장하는 것입니다.
	//int* ptr = arr;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("arr[%d]의 값 : %d\n", i, arr[i]);
	//}

	//// 포인터는 배열 하나하나의 주소값을 모두 가지고 있는 것입니다.
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	//}

	//// 포인터가 각각의 배열 요소에 접근하여 값을 변경할 수 있습니다.
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;

	//for (int i = 0; i < 3; i++)
	//{
	//	// arr 자체는 arr 처음 주소값을 가지고 있으므로, 해당 주소의 i번째 값을
	//	// 가져온다는 의미입니다.
	//	printf("arr[%d]의 값 : %d\n", i, *(arr + i));
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d]의 값 : %d\n", i, *(ptr + i));
	//}

	// Swap
	// 
	//int a = 10;
	//int b = 20;
	////printf("a의 주소 : %d\n", &a);
	////printf("b의 주소 : %d\n", &b);
	//// a 와 b의 값을 변경하기
	//printf("Swap 함수 전 => a : %d, b : %d \n", a, b);
	//swap(a, b);
	//printf("Swap 함수 후 => a : %d, b : %d \n", a, b);

	//// 값에 의한 복습(Call by Value) -> 값만 복사한다는 의미
	//// 값만 복습

	//// 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면..
	//// 주소를 전달함으로써 
	//printf("<주소값 전달> Swap 함수 전 => a : %d, b : %d \n", a, b);
	//swap_addr(&a, &b);
	//printf("<주소값 전달> Swap 함수 후 => a : %d, b : %d \n", a, b);


	// 배열일 때, arr2 -> 주소
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	// changeArray(&arr2[0]); 
	for (int i = 0; i < 3; i++) {
		printf("arr[%d] 의 값 : %d \n", i, arr2[i]);
	}


	return 0;
}

//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("Swap 함수 내 => a : %d, b : %d \n", a, b);
//}
//
//void swap_addr(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d \n", *a, *b);
//}
//
//void changeArray(int *ptr)
//{
//	ptr[2] = 50;
//}