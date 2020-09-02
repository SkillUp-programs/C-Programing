#include<stdio.h>
#include"arrays.h"
int main()
{
	int size,arr[100],i;
	scanf("%d",&size);//5
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	evenodd_own_count(arr,&size);//fun call  2 3
	
	for(i=0;i<size;i++)//2
	{
		printf("%d ",arr[i]);//arr[0] arr[1]
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
