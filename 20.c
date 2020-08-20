#include<stdio.h>
int main()
{
	int num,digit,r,f,T,t;
	scanf("%d",&T);//test cases
	for(t=1;t<=T;t++)
	{
		f=0;//f=0 ---> false
		scanf("%d%d",&num,&digit);//
		while(num)
		{
			r=num%10;
			num=num/10;
			if(digit==r)
			{
				f=1;
				printf("True");
				break;
			}
		}
		if(f==0)
		{
			printf("False");
		}
	}//test case loop ends
	
	return 0;
}

/*
sample input:
2
1234 2
1234 8
sample output:
True
False

*/














