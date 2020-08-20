#include<stdio.h>
int islucky(int num)
{
	int r,num1=num;
	while(num1)
	{
		r=num1%10;
		num1=num1/10;
		if(num%r!=0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int T,t,num,res;
	scanf("%d",&T);
	for(t=1;t<=T;t++)
	{
		scanf("%d",&num);
		res=islucky(num);//fun call
		if(res==1)
		{
			printf("Lucky");
		}
		else
		{
			printf("Not Lucky");
		}
	}
	return 0;
}
















