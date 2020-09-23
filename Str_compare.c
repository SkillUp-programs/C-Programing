#include<stdio.h>
#include"strings.h"

int main()
{
	char str1[100],str2[100];
	int res;
	scanf("%[^\n]s",&str1);
	scanf(" %[^\n]s",&str2);
	res=string_compare(str1,str2);//fun call
	if(res)
	{
		printf("Equal");
	}
	else
	{
		printf("Not equal");
	}
}
