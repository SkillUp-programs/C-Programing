#include<stdio.h>
#include"primes.h"
int main()
{
	int num,pos;
	scanf("%d%d",&num,&pos);//12 2
	printf("%d",nth_prime(num,pos));//12 2
	return 0;
}

/*
sample input:
12  2

17

sample output:

*/
