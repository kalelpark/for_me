#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000
int maindfsdfsdfsdf(void)
{

	// ���� �����
	// ���Ͽ� � �����͸� �����ϰ�,
	// ���Ͽ� ����� �����͸� �ҷ�����
	
	//  fputs, fgets ��      -> �ַ� ���ڿ� ���� �� �ҷ�����
	//  fprintf, fscanf ��   -> 

	//char line[MAX];  // char line[10000]

	// ������ ����, ���Ͽ���(���ϰ��, <�뵵>), 
	// read - r, write -w , append - a  
	/*FILE* file = fopen("text1.txt", "wb");

	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	fputs("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ��� \n", file);*/
	

	//�����б�
	FILE* file = fopen("text1.txt", "rb");   // w�� �ƴ�

	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}


	while (fgets(line, MAX, file) != NULL)
	{
		printf("%s", line);
	}

	fgets("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
    fputs("�� �������� Ȯ�����ּ��� \n", file);     fclose(file);
	

	// ������ ���� ���� ���� ���� ���¿��� ������ �߻��ϸ� ������ �ս��� ���Ƿ�,
	// ������ �׻� �ݴ� ������ �鿩�� �մϴ�.
	
	int num[6] = { 0, 0, 0, 0, 0, 0 }; 

	int bonus = 0; // ���ʽ� ����ȣ

	char str1[MAX];
	char str2[MAX];

	// ���� ����
	FILE* file = fopen("text2.txt", "wb");

	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}


	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "���ʽ���ȣ", 7);

	fclose(file);


	FILE* file = fopen("text2.txt", "rb");

	if (file == NULL)
	{
		printf("���� ���� ����\n");
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