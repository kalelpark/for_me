#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);


int mainasdasd()
{
	// ���� 5���� ����
	// exit(0); ���α׷� ����
	
	srand(time(NULL));
	
	int count = 0;
	for (int i = 1; i < 5; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		int ans = -1;
		// printf("%d x %d ?", num1, num2);
		showQuestion(i, num1, num2);
		scanf_s("%d", &ans);

		if (num1 * num2 == ans)
		{
			printf("Correct!!");
			break;
		}
		else
			printf("You Failed! return Try");

	}


	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2)
{
	printf("%d Level \n", level);
	printf("%d x %d ? \n", num1, num2);
	printf("answer ? ");
}