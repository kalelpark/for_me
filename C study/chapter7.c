#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main��������������(void)
{
	char str[6] = "coding";   // ĭ�� ��ĭ��ĭ ���Ե� ���Դϴ�.   ���ڿ� ������ "��"�� �ǹ��ϴ�  Null ���ڸ� �����ؾ� �մϴ�.
	
	printf("%s\n", str);

	char strt[] = "coding";
	printf("%s\n", strt);
	printf("%d\n", sizeof(strt));
}
