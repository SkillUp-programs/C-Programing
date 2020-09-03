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


int even_count(int *arr,int size)
{
	int i,ec=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			ec++;
		}
	}
	return ec;
}

int odd_count(int *arr,int size)
{
	int i,oc=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==1)
		{
			oc++;
		}
	}
	return oc;
}


void even_odd_count(int *arr,int size,int *ec,int *oc)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			*ec=*ec+1;
		}
		else
		{
			*oc=*oc+1;
		}
	}
}


void evenodd_count(int *arr,int size,int *eoc)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			eoc[0]=eoc[0]+1;
		}
		else
		{
			eoc[1]=eoc[1]+1;
		}
	}
}


void evenodd_own_count(int *arr,int *size)
{
	int i,ec=0,oc=0;
	for(i=0;i<*size;i++)
	{
		if(arr[i]%2==0)
		{
			ec++;
		}
		else
		{
			oc++;
		}
	}
	arr[0]=ec;
	arr[1]=oc;
	*size=2;
}

//int eoc[2]={0,0};
int * evenodd_return_count(int *arr,int *size)
{
	int i;
	static int eoc[2]={0,0};
	for(i=0;i<*size;i++)
	{
		if(arr[i]%2==0)
		{
			eoc[0]++;
		}
		else
		{
			eoc[1]++;
		}
	}
	*size=2;
	//printf("%d",eoc);
	return eoc;//
}

//03/sep/2020
int count_primes1(int *arr,int size)//1 2 3 4 5
{
	int i,pc=0;
	for(i=0;i<size;i++)
	{
		//arr[i];
		
		if(isprime(arr[i]))//1 2 3 4 5
		{
			pc++;//3
		}
		
	}
	return pc;
}



void display_primes(int *arr,int *size,int *primes)
{
	int i,pc=0,j=0;
	for(i=0;i<*size;i++)
	{
		//arr[i];
		if(isprime(arr[i]))//2
		{
			primes[pc++]=arr[i];//primes[0]=2;pc=pc+1
		}
	}
	*size=pc;
}





int display_prime(int *arr,int size,int *primes)
{
	int i,pc=0,j=0;
	for(i=0;i<size;i++)
	{
		//arr[i];
		if(isprime(arr[i]))//2
		{
			primes[pc++]=arr[i];//primes[0]=2;pc=pc+1
		}
	}
	return pc;
}



int * display_prime_return(int *arr,int *size)
{
	int i,pc=0;
	static int primes[100];
	for(i=0;i<*size;i++)
	{
		//arr[i];
		if(isprime(arr[i]))//2
		{
			primes[pc++]=arr[i];//primes[0]=2;pc=pc+1
		}
	}
	*size=pc;
	return primes;//
}












