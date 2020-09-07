#include<stdio.h>
#include<stdlib.h>
int main()
{
	int res,i,size,*arr;
	scanf("%d",&size);//5
	arr=calloc(size,sizeof(int));//dynamic memory using malloc
	scanf("%d",&size);//7
	arr=realloc(arr,sizeof(int)*size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}


/*
malloc-->   arr=malloc(size*sizeof(int));
calloc-->   arr=calloc(size,sizeof(int));
realloc-->  arr=realloc(arr,sizeof(int)*size);
free-->     free(arr)
*/















