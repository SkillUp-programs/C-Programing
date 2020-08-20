#include<stdio.h>
int main()
{
	int n,r,min,max;
	scanf("%d",&n);//4395
	min=n%10;//5
	max=n%10;//5
	while(n)//4395
	{
		r=n%10;//5; min>3
		n=n/10;
		if(min>r)//5>3
		{
			min=r;//min=3
		}
		if(max<r)//5<9
		{
			max=r;//max=9
		}
		
	}
	printf("%d   %d",min,max);
	
return 0;
}
// 9951722111
/*
sample input:
1234

1 4

4395

3  9

sample output:



*/










