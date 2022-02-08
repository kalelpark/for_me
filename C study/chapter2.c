#include <stdio.h>


// 한 프로젝트 내에 한개의 main 함수가 존재해야 합니다.
int main_zzsa_(void)
{
	// a++ , ++a  = 후위 연산자  , 만약 앞에 존재한다면 전위 연산자 입니다.
	
	// for (선언, 조건, 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d \n", i);
	}*/

	// while (조건)

	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello Word %d \n", i);
	//	i++;
	//}

	// do {} while (조건);
	/*int i = 1;
	do {
		printf("Hello World %d \n", i);
		i++;
	} while (i <= 10);*/


	// 2중 반복문
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("첫번째 반복문 %d \n", i);
	//	// 두번째 반복문은 계속 초기화 되면서 지속적으로 반복됩니다.
	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("두번째 반복문 %d \n", j);
	//	}
	//}

	// 구구단

	/*for (int i = 2; i <= 9; i++)
	{
		printf("----%d단계 구구단----\n", i);

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

// 피라미드 를 쌓아라
	int floor;

	printf("피라미드를 몇층으로 쌓을 것 입니까? ");
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