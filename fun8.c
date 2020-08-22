#include<stdio.h>
int main()
{
	int num,r,sum=0;
	scanf("%d",&num);//1234
	while(num)
	{
		r=num%10;//1
		num=num/10;//0
		sum=sum*10+r;//4321
	}
	printf("%d",sum);
	return 0;
}

/*
sample input:
1234
4321
sample output:

*/














