#include <stdio.h>

int main_printf_scanf(void) {
	// 실수형 변수 예제, . 을 활용하여, 소수점의 위치를 지정할 수 있습니다.
	
	/*float f = 46.5f;
	printf("%.2f\n", f);

	double d = 4.428;
	printf("%.2lf\n", d);*/

	// 값을 변환하지 않으려면, const를 활용하면 됩니다.
	//const int year = 2000;   // 상수의 개념
	//printf("태어난 년도 : %d \n", year);
	// 변경 불가능
	//YEAR = 2001;

	// printf
	// 연산
	//int add = 3 + 7;
	//printf("3 + 7 : %d \n", add);
	//// 들어가는 순서는 값 순서대로 입니다.
	//printf("%d + %d : %d \n", 3, 7, 3 + 7);



	// scanf
	//// 키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력하세요 : ");

	//scanf_s("%d", &input);
	//printf("입력 값 : %d \n", input);

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);

	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	// 문자(한글자 ), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	//char str[256];   // 256개를 한번에 받습니다.
	//scanf_s("%s", str, sizeof(str));       // 크기를 지정해주셔야 합니다., 단 띄어쓰기가 안됩니다.
	//printf("%s\n", str);

	
	//char name[256];
	//printf("이름이 뭐에요? ");
	//scanf_s("%s", name, sizeof(name));

	//int age;
	//printf("몇 살이에요? ");
	//scanf_s("%d", &age);

	//float weight;
	//printf("몸무게가 어떻게 되시나요? ");
	//scanf_s("%f", &weight);

	//double height;
	//printf("키가 어떻게 되시나요? ");
	//scanf_s("%lf", &height);

	//char waht[256];
	//printf("무슨 범죄?");
	//scanf_s("%s", waht, sizeof(waht));

	//// 조사 내용 출력
	//printf("\n\n ---- 범죄자 정보 ---\n\n");

	//printf("이름 : %s\n", name);
	//printf("나이 : %d\n", age);
	//printf("몸무게 :%f\n", weight);
	//printf("키 : %lf\n", height);
	//printf("범죄 : %s\n", waht);

	// 함수 종류
	// 반환값이 없는 함수











	return 0;
}

// 함수의 형태는 반환형 , 함수이름(전달 값)
// 전달 값 : 36
// 함수 : ㅁ + 4
// 출력값 : ?