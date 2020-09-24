#include<stdio.h>
#include"strings.h"
int main()
{
	char str[100];
	int count;
	scanf("%[^\n]s",&str);
	count=find_vowel_count(str);//fun call
	printf("%d",count);
}
