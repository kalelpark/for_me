#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 물고기 6마리
// 물 증발 중
// 물 추가

int level;
int arrayFish[6];
int* cursor;              //  물고기 선택하는 과정


void printfFishes();
void initData();
void decreaseWater(long elapsedTime);
int checkFishAlive();
int mainzzzqecxzcz(void)
{
	long startTime = 0;  // 게임시작 시간(시간을 나타낼 때는 long 자료형을 사용합니다.)
	long totalElpasedTime = 0;  //  총 경과시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

	int num;
	initData();
	
	cursor = arrayFish; // cursor[0], 등등 선택 가능

	startTime = clock();    // 현재 시간을 millisecond (1000분의 1초)단위로 반환
	while (1)
	{
		printfFishes();
		// getchar();       // 임시로 사용자 대기
		
		printf("몇번 어항에 물을 주실거에요? ");
		scanf_s("%d", &num);



		// 입력 값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못 되었습니다. \n");
			continue;
		}

		totalElpasedTime = (clock() - startTime) / CLOCKS_PER_SEC;         // 초단위로 변환
		printf("\n총 경과시간 : %ld초 \n", totalElpasedTime);

		// 직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElpasedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld초 \n", prevElapsedTime);

		// 어항의 물을 감소 (증발) 
		decreaseWater(prevElapsedTime);

		// 어항에 물 추가하기.
		// 1. 어항의 물이 0이면, 물을 주지 않습니다.
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 주지 못합니다.", num);
		}
		// 0이 아닌 경우 물 주기 근데 100을 넘지 않는지 체크합니다.
		else if (cursor[num - 1] + 1 <= 100)
		{
			//  물을 줍니다.
			printf("%d 번 어항에 물을 줍니다. \n\n", num);
			cursor[num - 1] += 1;
		}


		// 래벨업 20초마다 한번씩 수행
		if (totalElpasedTime / 20 > level - 1) {
			// 레벨업
			level += 1;
			printf(" *** 축 래벨업 !  기존 %d 레벨에서 %d  레벨로 업그레이드\n\n", level - 1, level);
		}

		if (level == 5)
		{
			printf("축하합니다. 게임을 클리어 하였습니다.");
			exit(0);
				
		}

		// 모든 물고기가 죽었는지 확인하기
		if (checkFishAlive() == 0)
		{
			// 물고기 모두 죽음ㅠ
			printf("모든 물고기가 죽음\n");
			exit(0);
		}
		else
		{
			printf("물고기가 아직 생존!\n");
		}
		
		prevElapsedTime = totalElpasedTime;

		// 10c초 -> 15초 (5초 : prevElaspedTime) -> 25c초 (10)
	}

	return 0;
}


void initData()
{
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}


void printfFishes()
{
	// 3칸의 공간을 받고, 마지막 부분에 값을 넣는 것입니다.
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);    // 3 난이도 조절을 위한 값입니다.
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	
	return 0;
}