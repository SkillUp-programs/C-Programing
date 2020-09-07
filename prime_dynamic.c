#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isprime(int n)
{
	int i;
	if(n==1)
	{
		return 0;
	}
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int * primes(int *arr,int *size)
{
	int pc=0,i,*res;
	res=calloc(1,sizeof(int));// one memory
	for(i=0;i<*size;i++)
	{
		if(isprime(arr[i]))
		{
			res[pc++]=arr[i];//2
			res=realloc(res,sizeof(int)*(pc+1));// 3memory
		}
	}
	*size=pc;
	return res;
}
int main()
{
	int *res,i,size,*arr;
	scanf("%d",&size);//5
	arr=calloc(size,sizeof(int));//dynamic memory using malloc
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=primes(arr,&size);//1 2 3 4 5
	for(i=0;i<size;i++)
	{
		printf("%d ",res[i]);//2 3 5
	}
	free(res);
	return 0;
}


/*
malloc-->   arr=malloc(size*sizeof(int));
calloc-->   arr=calloc(size,sizeof(int));
realloc-->  arr=realloc(arr,sizeof(int)*size);
free-->     free(arr)
*/















