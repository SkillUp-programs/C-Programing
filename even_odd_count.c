#include<stdio.h>
#include"arrays.h"
int main()
{
	int size,arr[100],i,ec=0,oc=0;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	even_odd_count(arr,size,&ec,&oc);
	
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
