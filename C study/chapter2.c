#include <stdio.h>


// �� ������Ʈ ���� �Ѱ��� main �Լ��� �����ؾ� �մϴ�.
int main_zzsa_(void)
{
	// a++ , ++a  = ���� ������  , ���� �տ� �����Ѵٸ� ���� ������ �Դϴ�.
	
	// for (����, ����, ����)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d \n", i);
	}*/

	// while (����)

	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello Word %d \n", i);
	//	i++;
	//}

	// do {} while (����);
	/*int i = 1;
	do {
		printf("Hello World %d \n", i);
		i++;
	} while (i <= 10);*/


	// 2�� �ݺ���
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("ù��° �ݺ��� %d \n", i);
	//	// �ι�° �ݺ����� ��� �ʱ�ȭ �Ǹ鼭 ���������� �ݺ��˴ϴ�.
	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("�ι�° �ݺ��� %d \n", j);
	//	}
	//}

	// ������

	/*for (int i = 2; i <= 9; i++)
	{
		printf("----%d�ܰ� ������----\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d \n", i, j, i * j);
		}
	}*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j> i+1; j--)
		{
			printf(" ");
		}
		
		for (int k = i + 1; k > 0; k --)
		{
			printf("*");
		}

		printf("\n");
	}*/

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = i; j < 5 - 1; j++)
	//	{
	//		printf(" ");
	//	}
	//	
	//	for (int k = 0; k <= i; k++)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//}

// �Ƕ�̵� �� �׾ƶ�
	int floor;

	printf("�Ƕ�̵带 �������� ���� �� �Դϱ�? ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
			{
				printf(" ");
			}

		for (int k = 0; k < i*2 + 1; k++)
		{
			printf("*");
		}		
		printf("\n");
	}

	return 0; 
}