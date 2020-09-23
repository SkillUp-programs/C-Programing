#include<stdio.h>
#include"strings.h"
int main()
{
	char str[100],ch;
	scanf("%[^\n]s",&str);
	ch=max_char(str);
	printf("%c",ch);
	
}
