#include <stdio.h>

//void swap(int a, int b);
//void swap_addr(int *a, int *b);
//void changeArray(int* ptr);
int mainzxzxzxzweqdsadxz(void)
{
	//// �迭�� �������� ����
	//int arr[3] = { 5, 10, 15 };
	//// ptr�̶�� ������ ������ arr 3�� ũ�⸸ŭ�� �迭�� �����ϴ� ���Դϴ�.
	//int* ptr = arr;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("arr[%d]�� �� : %d\n", i, arr[i]);
	//}

	//// �����ʹ� �迭 �ϳ��ϳ��� �ּҰ��� ��� ������ �ִ� ���Դϴ�.
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
	//}

	//// �����Ͱ� ������ �迭 ��ҿ� �����Ͽ� ���� ������ �� �ֽ��ϴ�.
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;

	//for (int i = 0; i < 3; i++)
	//{
	//	// arr ��ü�� arr ó�� �ּҰ��� ������ �����Ƿ�, �ش� �ּ��� i��° ����
	//	// �����´ٴ� �ǹ��Դϴ�.
	//	printf("arr[%d]�� �� : %d\n", i, *(arr + i));
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("������ ptr[%d]�� �� : %d\n", i, *(ptr + i));
	//}

	// Swap
	// 
	//int a = 10;
	//int b = 20;
	////printf("a�� �ּ� : %d\n", &a);
	////printf("b�� �ּ� : %d\n", &b);
	//// a �� b�� ���� �����ϱ�
	//printf("Swap �Լ� �� => a : %d, b : %d \n", a, b);
	//swap(a, b);
	//printf("Swap �Լ� �� => a : %d, b : %d \n", a, b);

	//// ���� ���� ����(Call by Value) -> ���� �����Ѵٴ� �ǹ�
	//// ���� ����

	//// �ּҰ��� �ѱ��? �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ��..
	//// �ּҸ� ���������ν� 
	//printf("<�ּҰ� ����> Swap �Լ� �� => a : %d, b : %d \n", a, b);
	//swap_addr(&a, &b);
	//printf("<�ּҰ� ����> Swap �Լ� �� => a : %d, b : %d \n", a, b);


	// �迭�� ��, arr2 -> �ּ�
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);
	// changeArray(&arr2[0]); 
	for (int i = 0; i < 3; i++) {
		printf("arr[%d] �� �� : %d \n", i, arr2[i]);
	}


	return 0;
}

//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("Swap �Լ� �� => a : %d, b : %d \n", a, b);
//}
//
//void swap_addr(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d, b : %d \n", *a, *b);
//}
//
//void changeArray(int *ptr)
//{
//	ptr[2] = 50;
//}