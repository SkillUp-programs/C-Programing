#include<stdio.h>
#include"arrays.h"
5

int main()
{
	int size,arr[100],i,*eoc;
	scanf("%d",&size);//5
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	eoc=evenodd_return_count(arr,&size);//fun call 
	
	for(i=0;i<size;i++)//2
	{
		printf("%d ",eoc[i]);//
	}
	return 0;
}

/*
sample input:
5
1 2 3 4 5

2 3
sample output:

*/
