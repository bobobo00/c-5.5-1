#define _CRT_SECURE_NO_WARNINGS 1
#include "String.h"
//void Index(char *s1, char *s2, int pos){
//	char s3[10];
//	int i = 0;
//	int j = 0;
//	while (*(s1+i) != '\0'){
//		s3[i] = *(s1 + pos-1+i);
//		i++;
//	}
//	s1 = s1 + pos - 1;
//	while (*s2 != '\0'){
//		*s1 = *s2;
//		s1++;
//		s2++;
//	}
//	while (i > 0){
//		*(s1+j) = s3[j];
//		j++;
//		i--;
//	}
//}
//返回子串s2在主串s1中第pos个字符之后的位置
int match(char *s1, char *s2, int pos,int len1,int len2){
	int i = pos;
	int j = 0;
	while (i <= len1 && j <= len2){
		if (s1[i] == s2[j]){
			++i;
			++j;
		}
		else{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j > len2){
		return i - strlen(s2);
	}
	else
		return -1;
}