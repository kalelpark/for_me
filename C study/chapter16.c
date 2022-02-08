#define _CRT_NO_SECURE_NO_WARNINGS
#include <stdio.h>

// 비밀번호를 입력 받아서
// 맞는 경우 보여주기 및 입력 가능 
// 틀린 경우 경고메세지 출력

#define MAX 10000

int main(void)
{
	// fgets, fputs 활용
	char line[MAX];       // 파일에서 불러온 내용을 저장할 변수
	char contents[MAX];   // 일기장에 입력할 내용
	char password[20];    // 비밀번호 입력
	char c;               //(MASKING)

	printf("비밀일기에 오시는 것을 환영합니다.\n");
	printf("비밀번호를 입력하세요 :");

	// getchar() / getch()
	// getchar 는 엔터 입력 시 작동
	// getch 는 입력 시 바로 작동

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13) // Enter  -> 비밀번호 입력 종료
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

	printf("\n\n ===== 비밀번호 확인 중 ... ====\n\n");
	if (strcmp(password, "skehzheld") == 0) // 비밀번호 일치
	{
		printf("==== 비밀번호 확인 완료 ====\n\n");
		char* fileName = "secretdiary.txt";
		FILE* file = fopen(fileName, "a + b"); // 파일 없으면 생성, 존재 시 append

		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n 내용을 계속 작성하세요 !  종료 하시려면  EXIT입력\n\n");

		while (1)
		{
			scanf("%[^\n]", contents);  // 줄바꿈이 나오기 전까지 모두 다 입력
			getchar();

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀일기 입력을 종료합니다.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else {
		printf("\n\n비밀번호가 틀렸습니다.\n\n");
	}

	return 0;
}