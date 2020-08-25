#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i,fc=0,sq;
	sq=sqrt(n);//
	for(i=2;i<=sq;i++)
	{
		printf("%d ",i);// n=7; i=1,2,3,4,5,6,7
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=isprime(n);//fun call 1/0
	if(res)
	{
		printf("Prime");
	}
	else
	{
		printf("Not a prime");
	}
	return 0;
}

/*
sample input:
prime:
7%1=0
10%10=0

98
2...9.321
sample output:

*/
