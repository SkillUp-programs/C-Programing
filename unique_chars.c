//aasdvasvavda
//asdv
//adsv

#include<stdio.h>
#include"strings.h"
int main()
{
	char str[100],*str2;
	scanf("%[^\n]s",&str);
	str2=unique_chars(str);//fun call
	printf("%s",str2);
}
