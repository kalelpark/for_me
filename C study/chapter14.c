#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// �����
// �̸�, ����, ����, Care Level

//typedef struct {
//	char* name;
//	int age;
//	char* character;
//	int level;
//} CAT;
//
//int collection[5] = { 0, 0, 0, 0, 0 };
//
//// ��ü ����Ʈ
//CAT cats[5];
//
//void initCats();
//void printCat(int selected);
//int checkCollection();
int mainqqqqqqqqqqqqqqqqqqqqqq��������������������qqqqqqqqqqq(void)
{	
	//srand(time(NULL));

	//initCats();

	//while (1)
	//{
	//	printf("����� ��ȯ");
	//	

	//	int selected = rand() % 5;   // 0 ~ 4 ������ ����
	//	/*rintf("%d", selected);*/
	//	printCat(selected);  // ����� ���� ���
	//	
	//	collection[selected] = 1;// ����� �̱� ó��

	//	int collectAll = checkCollection();

	//	if (collectAll == 1)
	//		break;

	//}


	return 0;
}


//void initCats()
//{
//	cats[0].name = "������";
//	cats[0].age = 5;
//	cats[0].character = "�¼�";
//	cats[0].level = 1;
//
//	cats[1].name = "�Ϳ��";
//	cats[1].age = 5;
//	cats[1].character = "��ī��";
//	cats[1].level = 3;
//
//	cats[2].name = "������";
//	cats[2].age = 7;
//	cats[2].character = "�Ḿ��";
//	cats[2].level = 2;
//
//	cats[3].name = "�����";
//	cats[3].age = 2;
//	cats[3].character = "�ò�";
//	cats[3].level = 4;
//
//	cats[4].name = "����";
//	cats[4].age = 12;
//	cats[4].character = "�����";
//	cats[4].level = 7;
//}
//
//void printCat(int selected)
//{
//	printf("\n\n����� §!~\n\n\n");
//	printf(" �̸�    : %s\n", cats[selected].name);
//	printf(" ����    : %d\n", cats[selected].age);
//	printf(" Ư¡    : %s\n", cats[selected].character);
//	printf(" ����    : ");
//
//	for (int i = 0; i < cats[selected].level; i++)
//	{
//		printf("%s", "��");
//	}
//	printf("\n\n");
//}
//
//int checkCollection()
//{
//	int collectAll = 1;
//	// ������ ����� ��� ��� �� ��Ҵ��� ����
//	printf("\n\n������ ����� ���\n\n");
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (collection[i] == 1)
//		{
//			printf("%10s", cats[i].name);
//			printf("\n\n");
//		}
//		else // if (collection[i] == 0)
//		{	
//			collectAll = 0;
//			printf("%10s", "�� �ڽ�");
//		}
//	}
//	printf("\n===============\n\n");
//
//	if (collectAll == 1)
//	{
//		printf("�����մϴ�!  ��� �� ��ҽ��ϴ�. ������ Ű���ּ���");
//	}
//	return collectAll;
//}