#include <stdio.h>

int function_with_return();
void function_without_return();
void p(int num);
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int num1, int num2);

int add(int num1,int num2);

int main_asda(void) {
	//// 반환값이 없는 함수 생성하기
	//function_without_return();

	//// 반환값이 있는 함수 생성하기
	///*int ret = function_with_return();
	//p(ret);*/
	//
	//// 파라미터(전달값)가 없는 함수
	//function_without_params();

	//// 파라미터(전달값)가 있는 함수
	//function_with_params(1, 2, 3);

	//// 파라미터 받고, 반환값 존재
	//int ret = apple(5, 2);

	// 계산기 제작 함수
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
	printf("num은 %d 입니다. \n", num);
}


void function_without_return()
{
	printf("반환값이 없는 함수입니다. \n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");

	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며 %d, %d ,%d 입니다.", num1, num2, num3);
}

int apple(int num1, int num2)
{
	printf("\n %d - %d = %d", num1, num2, num1 - num2);
}