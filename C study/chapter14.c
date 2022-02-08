#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 고양이
// 이름, 나이, 성격, Care Level

//typedef struct {
//	char* name;
//	int age;
//	char* character;
//	int level;
//} CAT;
//
//int collection[5] = { 0, 0, 0, 0, 0 };
//
//// 전체 리스트
//CAT cats[5];
//
//void initCats();
//void printCat(int selected);
//int checkCollection();
int mainqqqqqqqqqqqqqqqqqqqqqqㅍㅊㅌㅍㅌㅊㅍㅌㅊㅍqqqqqqqqqqq(void)
{	
	//srand(time(NULL));

	//initCats();

	//while (1)
	//{
	//	printf("고양이 소환");
	//	

	//	int selected = rand() % 5;   // 0 ~ 4 사이의 숫자
	//	/*rintf("%d", selected);*/
	//	printCat(selected);  // 고양이 정보 출력
	//	
	//	collection[selected] = 1;// 고양이 뽑기 처리

	//	int collectAll = checkCollection();

	//	if (collectAll == 1)
	//		break;

	//}


	return 0;
}


//void initCats()
//{
//	cats[0].name = "깜냥이";
//	cats[0].age = 5;
//	cats[0].character = "온순";
//	cats[0].level = 1;
//
//	cats[1].name = "귀요미";
//	cats[1].age = 5;
//	cats[1].character = "날카롭";
//	cats[1].level = 3;
//
//	cats[2].name = "수줍이";
//	cats[2].age = 7;
//	cats[2].character = "잠맘보";
//	cats[2].level = 2;
//
//	cats[3].name = "까꿀이";
//	cats[3].age = 2;
//	cats[3].character = "시끌";
//	cats[3].level = 4;
//
//	cats[4].name = "돼지";
//	cats[4].age = 12;
//	cats[4].character = "배고파";
//	cats[4].level = 7;
//}
//
//void printCat(int selected)
//{
//	printf("\n\n고양이 짠!~\n\n\n");
//	printf(" 이름    : %s\n", cats[selected].name);
//	printf(" 나이    : %d\n", cats[selected].age);
//	printf(" 특징    : %s\n", cats[selected].character);
//	printf(" 레벨    : ");
//
//	for (int i = 0; i < cats[selected].level; i++)
//	{
//		printf("%s", "★");
//	}
//	printf("\n\n");
//}
//
//int checkCollection()
//{
//	int collectAll = 1;
//	// 보유한 고양이 목록 출력 및 모았는지 여부
//	printf("\n\n보유한 고양이 목록\n\n");
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (collection[i] == 1)
//		{
//			printf("%10s", cats[i].name);
//			printf("\n\n");
//		}
//		else // if (collection[i] == 0)
//		{	
//			collectAll = 0;
//			printf("%10s", "빈 박스");
//		}
//	}
//	printf("\n===============\n\n");
//
//	if (collectAll == 1)
//	{
//		printf("축하합니다!  모두 다 모았습니다. 열심히 키워주세요");
//	}
//	return collectAll;
//}