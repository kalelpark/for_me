#define _CRT_NO_SECURE_NO_WARNINGS
#include <stdio.h>

// ��й�ȣ�� �Է� �޾Ƽ�
// �´� ��� �����ֱ� �� �Է� ���� 
// Ʋ�� ��� ���޼��� ���

#define MAX 10000

int main(void)
{
	// fgets, fputs Ȱ��
	char line[MAX];       // ���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX];   // �ϱ��忡 �Է��� ����
	char password[20];    // ��й�ȣ �Է�
	char c;               //(MASKING)

	printf("����ϱ⿡ ���ô� ���� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ��� :");

	// getchar() / getch()
	// getchar �� ���� �Է� �� �۵�
	// getch �� �Է� �� �ٷ� �۵�

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13) // Enter  -> ��й�ȣ �Է� ����
		{
			password[i]  = '\0';
		}
		else
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n ===== ��й�ȣ Ȯ�� �� ... ====\n\n");
	if (strcmp(password, "skehzheld") == 0) // ��й�ȣ ��ġ
	{
		printf("==== ��й�ȣ Ȯ�� �Ϸ� ====\n\n");
		char* fileName = "secretdiary.txt";
		FILE* file = fopen(fileName, "a + b"); // ���� ������ ����, ���� �� append

		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n ������ ��� �ۼ��ϼ��� !  ���� �Ͻ÷���  EXIT�Է�\n\n");

		while (1)
		{
			scanf("%[^\n]", contents);  // �ٹٲ��� ������ ������ ��� �� �Է�
			getchar();

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else {
		printf("\n\n��й�ȣ�� Ʋ�Ƚ��ϴ�.\n\n");
	}

	return 0;
}