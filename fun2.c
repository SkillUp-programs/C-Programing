/*
with args with out return type
with args with single value as return
2parts in funs:
1. fun call
2. fun def
*/
#include<stdio.h>
int search_digit(int num,int digit)//fun def
{
	//write your code here
	int r;
	while(num)
	{
		r=num%10;
		num=num/10;
		if(digit==r)
		{
			return 1;//
		}
	}
	return 0;
}
int main()
{
	int T,t,num,digit,res;
	scanf("%d",&T);
	for(t=1;t<=T;t++)
	{
		scanf("%d%d",&num,&digit);
		res=search_digit(num,digit);//fun call
		if(res==1)
		{
			printf("True\n");
		}
		else
		{
			printf("False\n");
		}
	}
	
	return 0;
}


