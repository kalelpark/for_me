#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000
int maindfsdfsdfsdf(void)
{

	// 파일 입출력
	// 파일에 어떤 데이터를 저장하고,
	// 파일에 저장된 데이터를 불러오기
	
	//  fputs, fgets 쌍      -> 주로 문자열 저장 및 불러오기
	//  fprintf, fscanf 쌍   -> 

	//char line[MAX];  // char line[10000]

	// 포인터 파일, 파일열기(파일경로, <용도>), 
	// read - r, write -w , append - a  
	/*FILE* file = fopen("text1.txt", "wb");

	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
	fputs("잘 적히는지 확인해주세요 \n", file);*/
	

	//파일읽기
	FILE* file = fopen("text1.txt", "rb");   // w가 아닌

	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}


	while (fgets(line, MAX, file) != NULL)
	{
		printf("%s", line);
	}

	fgets("fputs 를 이용해서 글을 적어볼게요\n", file);
    fputs("잘 적히는지 확인해주세요 \n", file);     fclose(file);
	

	// 파일을 열고 나서 닫지 않은 상태에서 문제가 발생하면 데이터 손실이 나므로,
	// 파일을 항상 닫는 습관을 들여야 합니다.
	
	int num[6] = { 0, 0, 0, 0, 0, 0 }; 

	int bonus = 0; // 보너스 번ㅇ호

	char str1[MAX];
	char str2[MAX];

	// 파일 쓰기
	FILE* file = fopen("text2.txt", "wb");

	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}


	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "보너스번호", 7);

	fclose(file);


	FILE* file = fopen("text2.txt", "rb");

	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	
	fscanf(file, "%s %d %d %d %d %d %d", str1,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d", str1,
		num[0], num[1], num[2], num[3], num[4], num[5]);
	printf("\n");
	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d", str2, bonus);

	fclose(file);
	
	return 0;
}