#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// 10������ ���� �ٸ� ���� �� ī�� (2)

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

	int failCount = 0;  // ���� Ƚ��


	while (1)
	{
		int select1 = 0; // ó��
		int select2 = 1; // ����

		printAnimal();
		printQuestion(); // ���� ���
		printf("\n\n������ ī�带 ������(2��) : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			printf("������ ī�带 �����Ͻø� �ȵ˴ϴ�.");
			continue;
		}


		// ��ǥ�� �ش��ϴ� ī�带 ������ ���� ������ �Ȱ����� Ȯ��
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// ���� ������ ���
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0)
			&& (arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y]))
		{
			printf("\n\n ����! �� %s �߰� \n\n", strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf(" Ʋ�Ȱų� �̹� ������ ī���Դϴ�.\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}


		if (foundAllAnimals() == 1)
		{
			printf("\n\n�����մϴ�.");
			printf("�� %d�� �Ǽ� �ϼ̽��ϴ�. ", failCount);
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
	strAnimal[0] = "������"; 
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "����";
	strAnimal[5] = "��Ÿ";
	strAnimal[6] = "�罿";
	strAnimal[7] = "�ڳ���";
	strAnimal[8] = "��";
	strAnimal[9] = "��";
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

// ��ǥ���� ����� ã��
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
	return pos / 5;          // ������ �������ݴϴ�.
}
int conv_pos_y(pos)
{
	return pos % 5;			// ������ �������ݴϴ�.
}

void printAnimal()
{
	printf("\n================���� ����=================\n\n");
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
	printf("\n\n(����)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// ���߸� �����̸�;
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// Ʋ���� �޸�
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