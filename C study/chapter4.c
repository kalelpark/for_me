#include <stdio.h>

int function_with_return();
void function_without_return();
void p(int num);
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int num1, int num2);

int add(int num1,int num2);

int main_asda(void) {
	//// ��ȯ���� ���� �Լ� �����ϱ�
	//function_without_return();

	//// ��ȯ���� �ִ� �Լ� �����ϱ�
	///*int ret = function_with_return();
	//p(ret);*/
	//
	//// �Ķ����(���ް�)�� ���� �Լ�
	//function_without_params();

	//// �Ķ����(���ް�)�� �ִ� �Լ�
	//function_with_params(1, 2, 3);

	//// �Ķ���� �ް�, ��ȯ�� ����
	//int ret = apple(5, 2);

	// ���� ���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);



	return 0;
}

int add(int num1,int num2)
{
	return num1 + num2;
}








void p(int num)
{
	printf("num�� %d �Դϴ�. \n", num);
}


void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�. \n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");

	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ�");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸� %d, %d ,%d �Դϴ�.", num1, num2, num3);
}

int apple(int num1, int num2)
{
	printf("\n %d - %d = %d", num1, num2, num1 - num2);
}