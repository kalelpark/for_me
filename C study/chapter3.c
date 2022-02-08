#include <stdio.h>
#include <time.h>   // rand를 사용하기 위한 라이브러리 
#include <stdlib.h>
int __mainzzzzㅇㅁㄴㅇㅁ(void) {
	// 버스를 탄다고 가정.
	//int /*age = 15;
	/*if (age >= 20)
		printf("일반인 입니다.");
	else
	*///	printf("학생 입니다.");*/

	// 초등학생(8~13) / 중학생(14 ~ 16)
	// if / else if else

	// 한줄이면 중괄호를 사용하지 않아도 됩니다.
	//

	/*int age = 19;
	if (age >= 8 && age <= 13)			
		printf("초등학생입니다");
	else if (age >= 14 && age <= 16)
		printf("중학생입니다.");
	else
	*/	//printf("고등학생입니다.");

	// break , continue

	//for (int i = 1; i <= 30; i++)
	//{	
	//	if (i >= 6)
	//	{
	//		printf("\n나머지 학생은 집에 가세요\n");
	//		break;   // for  문 탈출 시 사용합니다.
	//	}
	//	printf("%d 번 학생은 조별 반표 준비를 하세요.\n", i);
	//}

	// 1번 부터 30번까지는 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번 부터 10번까지 조별 발표

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표를 준비하세요\n", i);
		}
	}*/

	// & ||
	//int a = 10;
	//int b = 11;
	//int c = 12;
	//int d = 13;

	//if (a == b && c == d)
	//{
	//	printf("a 와 b는 같고,  c와  d도 같습니다. \n");
	//}
	//else
	//{
	//	printf("값이 서로 다릅니다.\n");
	//}


	//srand(time(NULL));  // 난수 초기화를 하지 않으면 동일한값이 연속적으로 나타납니다.
	//int num = rand() % 3 + 1; // 1~3

	//printf("%d", num);

	//srand(time(NULL));
	//int i = rand() % 3;

	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("모르는 값\n");
	//}

  ///	srand(time(NULL));
	
	/*int i = rand() % 3;
	
	switch (i)
	{
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default:printf("모릅니다.\n");*/

	//}


	//int num = rand() % 100 + 1;

	//printf("숫자 : %d\n", num);
	//int answer = 0;
	//int chance = 5;

	//while (chance > 0)
	//{
	//	printf("남은 기회 %d \n", chance--);
	//	printf("숫자를 맞춰보세요 (1~100) : ");
	//	scanf_s("%d", &answer);

	//	if (answer < num)
	//	{
	//		printf("UP \n\n");
	//	}
	//	else if (answer > num)
	//	{
	//		printf("Down \n\n");
	//	}
	//	else if (answer == num)
	//	{
	//		printf("%d번 기회를 남기시고, 맞추셨습니다. :)", chance);
	//		break;
	//	}
	//	else
	//	{
	//		printf("ERROR");
	//	}
	//}




	return 0;
}