#define _CRT_SECURE_NO_WARNINGS 1
#include "String.h"
int main(){
	char s1[] = "abcdefg";
	char s2[] = "efg";
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int index = 0;
	printf("Plese enter index location\n");
	scanf("%d", &index);
	//Index(s1, s2, index);
	//printf("%s", s1);
	int result=match(s1, s2, index,len1,len2);
	printf("%d", result);
	system("pause");
	return 0;
}