#include<stdio.h>
#include"primes.h"
int main()
{
	int num,pos;
	scanf("%d",&num);
	if(isprime(num))
	{
		//main logic
		pos=find_pos_rec(num);// in prime number series
		//printf("%d\n",pos);
		if(isprime(pos))
		{
			printf("Super Prime");
		}
		else
		{
			printf("Not a Super Prime");
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
//2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
11
prime and super prime

7
prime but not super prime
sample output:

*/







