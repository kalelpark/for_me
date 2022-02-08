#include <stdio.h>

//void swap(int a, int b);
//void swap_add(int* a, int* b);

int mainzzzzzzzvxcvbxcv(void)
{
	int a = 10;
	int b = 20;
	//swap(a, b);
	printf("<Pointer 사용X> Swap a : %d , b : %d\n", a, b);
	/*swap_add(&a, &b);*/
	printf("\n");
	printf("<Pointer 사용O> Swap a : %d , b : %d\n", a, b);

	return 0;
}
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swap_add(int*a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}