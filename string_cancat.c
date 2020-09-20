#include<stdio.h>
#include"strings.h"
int main()
{
	char str1[100],str2[100];
	scanf(" %[^\n]s",&str1);
	scanf(" %[^\n]s",&str2);
	string_concat(str2,str1);//fun call
	printf("%s",str2);
}

/*
s1=sudhir
s2=reddy

s1=sudhir reddy

strcat(s1,s2);
*/
