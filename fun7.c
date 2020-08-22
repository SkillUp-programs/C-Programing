#include<stdio.h>
void isbinary(int num,int *res)
{
	int r;
	while(num)
	{
		r=num%10;
		num=num/10;
		if(r==0 || r==1)
		{
			*res=1;
		}
		else
		{
			*res=0;
			break;
		}
	}
	
}
int main()
{
	int num,res;
	scanf("%d",&num);
	isbinary(num,&res);//
	if(res==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}



/*
input:
10101
True
12010
False
*/
