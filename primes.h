#include<stdio.h>
#include<math.h>
int isprime(int num)
{
	int i;
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int nearest_prime(int l,int r)
{
	int lp,rp;
	while(1)
		{
			lp=isprime(l);//1
			rp=isprime(r);//0
			if(lp && rp)//
			{
				printf("%d %d",l,r);
				break;
			}
			else if(lp)//1
			{
				printf("%d",l);
				break;
			}
			else if(rp)//0
			{
				printf("%d",r);
				break;
			}
			else
			{
				l--;//23
				r++;//27
			}
		}
}


int megaPrime(n)//977
{
	int r;
	while(n)//9
	{
		r=n%10;//9
		n=n/10;//0
		if(!isprime(r))//isprime(9)-->0==0
		{
			return 0;
		}
	}
	return 1;
}

int reverse(num)
{
	int r,rev=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	return rev;
}















