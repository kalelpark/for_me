#include <stdio.h>

struct GameInfo{
	char* name;
	int year;
	int price;
	char* company;
	
	struct GameInfo* friendGame; // ������ü
};


typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // ������ü
} GameInfo;



int main_strdasdasdasdasuct(void)
{
	// ����ü[ ���
	struct GameInfo gameInfo1;

	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	printf("-- ���� ��� ���� --\n");
	printf("   ���� �� : %s\n", gameInfo1.name);
	printf("   �߸ų⵵ : %d\n", gameInfo1.year);
	printf("   ���� : %d\n", gameInfo1.price);
	printf("   �߸� ȸ��: %s\n", gameInfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = {"�ʵ�����", 2017, 100, "�ʵ�ȸ��"};

	printf("\n-- ���� ��� ���� --\n");
	printf("   ���� �� : %s\n", gameInfo2.name);
	printf("   �߸ų⵵ : %d\n", gameInfo2.year);
	printf("   ���� : %d\n", gameInfo2.price);
	printf("   �߸� ȸ��: %s\n", gameInfo2.company);

	// ����ü �迭
	struct GameInfo gameArray[2] = {
		{"��������", 2017, 50, "����ȸ��"},
		{"�ʵ�����", 2017, 100, "�ʵ�ȸ��"}
	};
	
	printf("\n-- ���� ��� ���� --\n");
	printf("  %s\n", gameArray[0].name);
	printf("  %d\n", gameArray[0].year);
	printf("  %d\n", gameArray[0].price);
	printf("  %s\n", gameArray[0].company);

	// ����ü ������
	struct GameInfo* gamePtr; // �̼Ǹ� 

	gamePtr = &gameInfo1;
	printf("\n\n\n-- ���� ��� ���� --\n");
	printf("  %s\n", ( *gamePtr).name);   // int 
	printf("  %d\n", (*gamePtr).year);
	printf("  %d\n", (*gamePtr).price);
	printf("  %s\n", (*gamePtr).company);

	printf("\n\n\n-- ���� ��� ���� --\n");
	printf("  %s\n", gamePtr ->name);   // int 
	printf("  %d\n", gamePtr->year);
	printf("  %d\n", gamePtr->price);
	printf("  %s\n", gamePtr->company);


	// ������ü ����
	gameInfo1.friendGame = &gameInfo2;
	printf("\n\n\n-- ������ü�� ���� ��� ���� --\n");
	printf("  %s\n", gameInfo1.friendGame->name);   // int 
	printf("  %d\n", gameInfo1.friendGame->year);
	printf("  %d\n", gameInfo1.friendGame->price);
	printf("  %s\n", gameInfo1.friendGame->company);

	// typedef
	// �ڷ����� ���� ����
	int i = 1;

	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; //
	�Ǽ� �Ǽ����� = 3.23f;
	printf("\n\n");
	printf("���� ���� : %d,  �Ǽ� ����  :%.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = 2015;
	//

	GameInfo game2;
	game2.name = "";

	// Ǯ� ���⵵ ���� struct GameInformation
	// type def struct �� ��밡��



	return 0;
}