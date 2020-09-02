#include<stdio.h>
#include"arrays.h"
int main()
{
	int size,arr[100],i,ec,oc;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ec=even_count(arr,size);
	oc=odd_count(arr,size);
	printf("%d  %d",ec,oc);
	return 0;
}

/*
sample input:
5
1 2 3 4 5

2 3
sample output:

*/
