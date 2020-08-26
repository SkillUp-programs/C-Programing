#include<stdio.h>
#include<math.h>
#include"primes.h"
int main()
{
	int num,l,r,rp,lp;
	scanf("%d",&num);
	if(isprime(num))
	{
		printf("%d",num);
	}
	else
	{
		//main logic
		l=num-1;
		r=num+1;//l=23 num=25 r=27
		nearest_prime(l,r);	//fun call	
	}
}

/*
n=11
11

n=20
19

n=15

13 17

check is n is prime
	print that number
n is not prime
	find left prime and right prime
	print nearest distance prime
*/
