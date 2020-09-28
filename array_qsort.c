#include<stdio.h>
int cmpfun(void *a,void * b)
{
	//return (*(int*)a- *(int*)b);//asc
	return (*(int*)b - *(int*)a);//des
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	qsort(arr,n,sizeof(int),cmpfun);//fun call
	
	printf("\nAfter sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
