#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int mainㅊㅊㅌㅊㅇㄹㄴ(void)
{
	char str[6] = "coding";   // 칸에 한칸한칸 삽입된 것입니다.   문자열 끝에는 "끝"을 의미하는  Null 문자를 포함해야 합니다.
	
	printf("%s\n", str);

	char strt[] = "coding";
	printf("%s\n", strt);
	printf("%d\n", sizeof(strt));
}
