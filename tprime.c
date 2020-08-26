#include<stdio.h>
#include"primes.h"
int main()
{
	int num;
	scanf("%d",&num);
	if(isprime(num))//fun call
	{
		//main logic
		printf("Prime\n");
		num=reverse(num);//fun call
		if(isprime(num))//fun call
		{
			printf("TWisted Prime");
		}
		else
		{
			printf("Not a TWisted Prime");
		}
		
	}
	else
	{
		printf("Not a Prime");
	}
}
/*
37
73
check is it prime:
	reverse the number
	check the reversed number is prime or not
else:
	print not prime
*/
