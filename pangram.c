//pangram
// the quick brown fox jumps over the lazy dog
// a-z
#include<stdio.h>
#include"strings.h"
int main()
{
	char str[100];
	scanf("%[^\n]s",&str);
	if(ispangram(str))//fun call
	{
		printf("Pangram");
	}
	else
	{
		printf("Not a Pangram");
	}
}
