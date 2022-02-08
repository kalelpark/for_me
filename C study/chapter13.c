#include <stdio.h>

struct GameInfo{
	char* name;
	int year;
	int price;
	char* company;
	
	struct GameInfo* friendGame; // 연관업체
};


typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // 연관업체
} GameInfo;



int main_strdasdasdasdasuct(void)
{
	// 구조체[ 사용
	struct GameInfo gameInfo1;

	gameInfo1.name = "나도게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	printf("-- 게임 출시 정보 --\n");
	printf("   게임 명 : %s\n", gameInfo1.name);
	printf("   발매년도 : %d\n", gameInfo1.year);
	printf("   가격 : %d\n", gameInfo1.price);
	printf("   발매 회사: %s\n", gameInfo1.company);

	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};

	printf("\n-- 게임 출시 정보 --\n");
	printf("   게임 명 : %s\n", gameInfo2.name);
	printf("   발매년도 : %d\n", gameInfo2.year);
	printf("   가격 : %d\n", gameInfo2.price);
	printf("   발매 회사: %s\n", gameInfo2.company);

	// 구조체 배열
	struct GameInfo gameArray[2] = {
		{"나도게임", 2017, 50, "나도회사"},
		{"너도게임", 2017, 100, "너도회사"}
	};
	
	printf("\n-- 게임 출시 정보 --\n");
	printf("  %s\n", gameArray[0].name);
	printf("  %d\n", gameArray[0].year);
	printf("  %d\n", gameArray[0].price);
	printf("  %s\n", gameArray[0].company);

	// 구조체 포인터
	struct GameInfo* gamePtr; // 미션맨 

	gamePtr = &gameInfo1;
	printf("\n\n\n-- 게임 출시 정보 --\n");
	printf("  %s\n", ( *gamePtr).name);   // int 
	printf("  %d\n", (*gamePtr).year);
	printf("  %d\n", (*gamePtr).price);
	printf("  %s\n", (*gamePtr).company);

	printf("\n\n\n-- 게임 출시 정보 --\n");
	printf("  %s\n", gamePtr ->name);   // int 
	printf("  %d\n", gamePtr->year);
	printf("  %d\n", gamePtr->price);
	printf("  %s\n", gamePtr->company);


	// 연관업체 게임
	gameInfo1.friendGame = &gameInfo2;
	printf("\n\n\n-- 연관업체의 게임 출시 정보 --\n");
	printf("  %s\n", gameInfo1.friendGame->name);   // int 
	printf("  %d\n", gameInfo1.friendGame->year);
	printf("  %d\n", gameInfo1.friendGame->price);
	printf("  %s\n", gameInfo1.friendGame->company);

	// typedef
	// 자료형에 별명 지정
	int i = 1;

	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; //
	실수 실수변수 = 3.23f;
	printf("\n\n");
	printf("정수 변수 : %d,  실수 변수  :%.2f\n\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2015;
	//

	GameInfo game2;
	game2.name = "";

	// 풀어서 쓰기도 가능 struct GameInformation
	// type def struct 만 사용가능



	return 0;
}