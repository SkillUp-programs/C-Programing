#include<stdio.h>
int string_copy(char *str1,char *str2)
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];//t h i s i s s u duhir
	}
	str2[i]='\0';//imp point
	return i;
}
int main()
{
	char str1[100],str2[100];
	int len;
	scanf(" %[^\n]s",&str1);//space is last  '\0'
	len=string_copy(str1,str2);//fun call
	printf("org:%s\ncopy:%s",str1,str2);//string copy
	printf("\nlength: %d",len);//string length
}
//strcpy s1,s2
