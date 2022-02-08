#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ����� 6����
// �� ���� ��
// �� �߰�

int level;
int arrayFish[6];
int* cursor;              //  ����� �����ϴ� ����


void printfFishes();
void initData();
void decreaseWater(long elapsedTime);
int checkFishAlive();
int mainzzzqecxzcz(void)
{
	long startTime = 0;  // ���ӽ��� �ð�(�ð��� ��Ÿ�� ���� long �ڷ����� ����մϴ�.)
	long totalElpasedTime = 0;  //  �� ����ð�
	long prevElapsedTime = 0; // ���� ��� �ð� (�ֱٿ� ���� �� �ð� ����)

	int num;
	initData();
	
	cursor = arrayFish; // cursor[0], ��� ���� ����

	startTime = clock();    // ���� �ð��� millisecond (1000���� 1��)������ ��ȯ
	while (1)
	{
		printfFishes();
		// getchar();       // �ӽ÷� ����� ���
		
		printf("��� ���׿� ���� �ֽǰſ���? ");
		scanf_s("%d", &num);



		// �Է� �� üũ
		if (num < 1 || num > 6)
		{
			printf("\n�Է°��� �߸� �Ǿ����ϴ�. \n");
			continue;
		}

		totalElpasedTime = (clock() - startTime) / CLOCKS_PER_SEC;         // �ʴ����� ��ȯ
		printf("\n�� ����ð� : %ld�� \n", totalElpasedTime);

		// ���� �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapsedTime = totalElpasedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld�� \n", prevElapsedTime);

		// ������ ���� ���� (����) 
		decreaseWater(prevElapsedTime);

		// ���׿� �� �߰��ϱ�.
		// 1. ������ ���� 0�̸�, ���� ���� �ʽ��ϴ�.
		if (cursor[num - 1] <= 0)
		{
			printf("%d �� ������ �̹� �׾����ϴ�.. ���� ���� ���մϴ�.", num);
		}
		// 0�� �ƴ� ��� �� �ֱ� �ٵ� 100�� ���� �ʴ��� üũ�մϴ�.
		else if (cursor[num - 1] + 1 <= 100)
		{
			//  ���� �ݴϴ�.
			printf("%d �� ���׿� ���� �ݴϴ�. \n\n", num);
			cursor[num - 1] += 1;
		}


		// ������ 20�ʸ��� �ѹ��� ����
		if (totalElpasedTime / 20 > level - 1) {
			// ������
			level += 1;
			printf(" *** �� ������ !  ���� %d �������� %d  ������ ���׷��̵�\n\n", level - 1, level);
		}

		if (level == 5)
		{
			printf("�����մϴ�. ������ Ŭ���� �Ͽ����ϴ�.");
			exit(0);
				
		}

		// ��� ����Ⱑ �׾����� Ȯ���ϱ�
		if (checkFishAlive() == 0)
		{
			// ����� ��� ������
			printf("��� ����Ⱑ ����\n");
			exit(0);
		}
		else
		{
			printf("����Ⱑ ���� ����!\n");
		}
		
		prevElapsedTime = totalElpasedTime;

		// 10c�� -> 15�� (5�� : prevElaspedTime) -> 25c�� (10)
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
	// 3ĭ�� ������ �ް�, ������ �κп� ���� �ִ� ���Դϴ�.
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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
		arrayFish[i] -= (level * 3 * (int)elapsedTime);    // 3 ���̵� ������ ���� ���Դϴ�.
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