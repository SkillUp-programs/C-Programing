#include<stdio.h>
#include"arrays.h"
int main()
{
	int size,arr[100],i,eoc[2]={0,0};
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	evenodd_count(arr,size,eoc);//fun call
	
	printf("%d  %d",eoc[0],eoc[1]);
	return 0;
}

/*
sample input:
5
1 2 3 4 5

2 3
sample output:

*/
