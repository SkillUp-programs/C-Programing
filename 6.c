#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
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
..
.
.
5 X 20 = 100

*/
















