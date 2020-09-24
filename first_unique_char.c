//  aaacdcbaec
// 4 1 3 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

#include<stdio.h>
#include"strings.h"
int main()
{
	char str[100],ch;
	scanf("%[^\n]s",&str);
	ch=first_unique_char(str);//fun call
	printf("%c",ch);
}
