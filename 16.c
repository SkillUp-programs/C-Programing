#include<stdio.h>
int main()
{
	int n,r,n1,ec=0,oc=0,dc=0;//
	scanf("%d",&n);//1234
	n1=n;//copy of a number
	while(n)//
	{
		r=n%10;//
		n=n/10;//	
		if(r%2==0)
		{
			ec++;
		}
		else//r%2==1
		{
			oc++;//
		}
		dc++;	//
	}
	if(dc==ec)
	{
		printf("EVEN");
	}
	else if(dc==oc)
	{
		printf("ODD");
	}
	else
	{
		printf("MIXED");
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










