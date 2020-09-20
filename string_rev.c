#include<stdio.h>
#include"strings.h"
int main()
{
	char str[100],*rev;
	scanf("%[^\n]s",&str);
	//string_rev(str,rev);//fun call
	rev=str_rev(str);//funcall
	printf("%s",rev);
}
//strcpy s1,s2
