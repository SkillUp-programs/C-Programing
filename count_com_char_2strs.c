//count of com char in 2 strs
//sudhir
//sudher
//5
#include<stdio.h>
#include"strings.h"
int main()
{
	char str1[100],str2[100];
	int count;
	scanf("%[^\n]s",&str1);
	scanf(" %[^\n]s",&str2);
	count=count_chars(str1,str2);//fun call
	printf("%d",count);
}
