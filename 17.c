#include<stdio.h>
int main()
{
	int n,r,f;
	scanf("%d",&n);//1231
	if(n%2==0)//f=1 means number is even f=0 means odd f=2 --> mixed
	{
		f=1;//flag var
	}
	else
	{
		f=0;//f=0
	}
	while(n)//1
	{
		if((f==1 && n%2==1)|| (f==0 && n%2==0))//F || T  --->T
		{
			printf("MIXED");
			f=2;//modify f to 2
			break;
		}
		n=n/10;
	}
	if(f==1)
	{
		printf("EVEN");
	}
	else if(f==0)
	{
		printf("ODD");
	}
		
return 0;
}
// 9951722111
/*
sample input:
2468---> EVEN
3579---> ODD

1234---> Mixed

sample output:

2468-->even
1351-->odd

1234--->even

*/










