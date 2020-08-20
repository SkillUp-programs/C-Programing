#include<stdio.h>
int main()
{
	int n,r1,r2,i,temp;
	scanf("%d%d%d",&n,&r1,&r2);//r1=10 r2=5;   r1=5  r2=10
	if(r1>r2)//r1>r2
	{
		temp=r1;// temp=10    r1=10      r2=5
		r1=r2;//temp=10  r1=5 r2=5
		r2=temp;//temp=10  r1=5   r2=10
	}//swapping is done
	for(i=r1;i<=r2;i++)// 
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
5 5 10
sample output:
5 X 05 = 25
5 X 06 = 30
5 X 07 = 35
5 X 08 = 40
5 X 09 = 45
5 X 10 = 50
*/
















