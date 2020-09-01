#include<stdio.h>
#include"arrays.h"

int main()
{
	int size,arr[100],i,sum;// 
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printf("%d %d\n",arr,*arr);
	sum=sum_array(arr,size);//fun call
	printf("%d",sum);
	return 0;
}

/*
sum of array elements using functions
sample input:
5
1 2 3 4 5
sample output:
15
*/
