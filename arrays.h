#include"primes.h"
int sum_array(int *arr,int size)
{
	int i,sum=0;//1 2 3 4 5
	for(i=0;i<size;i++)
	{
		//printf("%d ",arr[i]);
		sum=sum+arr[i];//
	}
	return sum;
}



int find_min(int *arr,int size)//
{
	int i,min;
	min=arr[0];//3
	for(i=1;i<size;i++)
	{
		//arr[i]// 4 2 5 6 1
		if(min>arr[i])//2>1
		{
			min=arr[i];//1
		}
	}
	return min;
}


int find_max(int *arr,int size)//3 4 2 5 6 1
{
	int i,max;
	max=arr[0];//3
	for(i=1;i<size;i++)
	{
		if(max<arr[i])//6<1
		{
			max=arr[i];//6
		}
	}
	return max;
}



int count_primes(int *arr,int size)//3 4 6 7 2
{
	int i,pc=0;
	for(i=0;i<size;i++)
	{
		//3 4 6 7 2
		if(isprime(arr[i]))
		{
			pc++;
		}
	}
	return pc;
}






















