#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i,fc=0,sq;
	sq=sqrt(n);//
	for(i=2;i<=sq;i++)
	{
		//printf("%d ",i);// n=7; i=1,2,3,4,5,6,7
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int megaPrime(n)//977
{
	int r;
	while(n)//9
	{
		r=n%10;//9
		n=n/10;//0
		if(isprime(r)==0)//isprime(9)-->0==0
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
	if(isprime(n)==1)//res=fun() or printf("%f",) or if() or any loops as conditions
	{
		printf("Prime");
		if(megaPrime(n))//fun call 1/0
		{
			printf("Mega Prime");
		}
		else
		{
			printf("Not a Mega Prime");
		}
		
	}
	else
	{
		printf("Not a prime");
	}
	return 0;
}

/*
sample input:
mega prime:

sample output:

*/
