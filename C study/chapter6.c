#include <stdio.h>

int maisazzdasdan(void)
{
	// 배열
	//int subway_1 = 30; // 지하철 1호차에 30명이 타고 있습니다.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	//printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
	//printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);
	

	// 여러개의 변수를 함께, 동시에 생성
	//int subway_array[3];
	//subway_array[0] = 10;
	//subway_array[1] = 20;
	//subway_array[2] = 30;
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d명이 탑승하고 있습니다.\n", i+1,  subway_array[i]);
	//}

	
	//int arr[10];//  = { 1,2 , 3, 4, 5, 6, 7, 8, 9, 10 };

	//// 배열 크기는 직접 상수 값을 넣어야 합니다.

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	
	// 몇개만 채우면 , 나머지는 0으로 채워집니다.

	//float arr_f[5] = { 1.0f , 2.0f, 3.0f };
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%.2f\n", arr_f[i]);
	//}

	// 문자 vs 문자열
	//char c = 'A';
	//
	//printf("%c\n", c);

	//char str[7] = "coding";   // 칸에 한칸한칸 삽입된 것입니다.   문자열 끝에는 "끝"을 의미하는  Null 문자를 포함해야 합니다.
	//
	//printf("%s\n", str);

	//char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));  // sizeof 는 크기 NUll 값을 자동으로 포함하기 대문이빈다.

	/*char kor[] = "나도 코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	*/// 영어 1글자 1byte
	// 한글 1글자 2byte

	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s", c_array); // 남는 문자 띄어쓰기가 들어갑니다.

	return 0;
}