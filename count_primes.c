#include<stdio.h>
#include"arrays.h"
int main()
{
	int size,arr[100],i,pc;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	pc=count_primes(arr,size);//fun call
	printf("%d",pc);
	return 0;
}

/*
sample input:


sample output:

/*
5
3 4 6 7 2

3
*/
