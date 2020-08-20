#include<stdio.h>
int main()
{
	int n,i;//5
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		if(i%n==0)
		{
			continue;
		}
		if(i<10)
		{
			printf("%d X 0%d = %d\n",n,i,n*i);
		}
		else//i>=10
		{	
			printf("%d X %d = %d\n",n,i,n*i);
		}
	}	
	return 0;
}

/*
sample input:
5 
sample output:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 6 = 30

5 X 19 = 100

*/
















