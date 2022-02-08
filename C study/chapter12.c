#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// 10마리의 서로 다른 동물 각 카드 (2)

int arrayAnimal[4][5];
char* strAnimal[10];
int checkAnimal[4][5];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int conv_pos_x(pos);
int conv_pos_y(pos);
int getEmptyPosition();
void printAnimal();
void printQuestion();
int foundAllAnimals();

int mainqqwwewqeq(void)
{
	srand(time(NULL));
	
	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0;  // 실패 횟수


	while (1)
	{
		int select1 = 0; // 처음
		int select2 = 1; // 나중

		printAnimal();
		printQuestion(); // 문제 출력
		printf("\n\n뒤집을 카드를 고르세요(2장) : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			printf("동일한 카드를 선택하시면 안됩니다.");
			continue;
		}


		// 좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// 같은 동물인 경우
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0)
			&& (arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y]))
		{
			printf("\n\n 빙고! ㅣ %s 발견 \n\n", strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf(" 틀렸거나 이미 뒤집힌 카드입니다.\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}


		if (foundAllAnimals() == 1)
		{
			printf("\n\n축하합니다.");
			printf("총 %d번 실수 하셨습니다. ", failCount);
		}


	}

	return 0;
}


void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "원숭이"; 
	strAnimal[1] = "하마";
	strAnimal[2] = "강아지";
	strAnimal[3] = "고양이";
	strAnimal[4] = "돼지";
	strAnimal[5] = "낙타";
	strAnimal[6] = "사슴";
	strAnimal[7] = "코끼리";
	strAnimal[8] = "소";
	strAnimal[9] = "말";
}


void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

// 좌표에서 빈공간 찾기
int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20;
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}

	}

	return 0;
}

int conv_pos_x(pos)
{
	return pos / 5;          // 정수로 가져다줍니다.
}
int conv_pos_y(pos)
{
	return pos % 5;			// 정수로 가져다줍니다.
}

void printAnimal()
{
	printf("\n================게임 시작=================\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n==========================================\n\n");
}

void printQuestion()
{
	printf("\n\n(문제)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 맞추면 동물이름;
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// 틀리면 뒷면
			else
			{
				printf("%8d", seq);
			}
			seq++;

		}
		printf("\n");
	}

}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
				return 0;
		}
	}
	return 1;
}