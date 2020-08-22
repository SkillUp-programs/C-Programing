#include<stdio.h>
/*
int main()
{
	int num,r,sum=0;
	scanf("%d",&num);//1234
	while(num)
	{
		r=num%10;//1
		num=num/10;//0
		sum=sum+r;//10
	}
	printf("%d",sum);
	return 0;
}

*/
/*
int sum_of_digits(int num)
{
	int sum=0,r;
	while(num)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	return sum;
}
int main()
{
	int num,sum=0;
	scanf("%d",&num);//1234
	sum=sum_of_digits(num);
	printf("%d",sum);
}

*/
/*
void sum_of_digits(int num,int *sum)
{
	int r;
	while(num)
	{
		r=num%10;
		num=num/10;
		*sum=*sum+r;
	}
}
int main()
{
	int num,sum=0;
	scanf("%d",&num);//1234
	sum_of_digits(num,&sum);
	printf("%d",sum);
}

*/
void sum_of_digits(int *num)
{
	int r,n=*num,sum=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	*num=sum;
}
int main()
{
	int num,sum=0;
	scanf("%d",&num);//1234
	sum_of_digits(&num);
	printf("%d",num);
}




/*
sample input:
1234
4321
sample output:

*/














