#include<stdio.h>
int main()
{
	int n,r,n1,f=0;//f=0 lucky
	scanf("%d",&n);//36
	n1=n;//copy
	while(n)
	{
		r=n%10;//6
		n=n/10;//3
		if(n1%r!=0)//3%6
		{
			f=1;
			printf("not Lucky");
			break;
		}
	}
	if(f==0)
	{
		printf("Lucky");
	}
	
	return 0;
}

/*
24
24%4==0
24%2==0
lucky

23
23%3==0
not a lucky 

36
36%6==0
36%3==0

*/






