#include<stdio.h>
#include"primes.h"
int main()
{
	int n;
	scanf("%d",&n);
	if(isprime(n))//fun call
	{
		//main logic here
		if(isspprime(n))//fun call printf("%d",isprime(n));if(con)//1/0
		{
			printf("Sp Prime");
		}
		else
		{
			printf("Not Sp Prime");
		}
	}
	else
	{
		printf("Not a Prime");
	}
	return 0;
}

/*
sample input:


sample output:

*/

/*
n=5
sp prime
1.prime
2.find p1=3  p2=2  c=1
3.p1+p2+c=n?
not sp
SpPrime
*/
