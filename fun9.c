#include<stdio.h>
int reverse(int num)
{
	int rev=0,r;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	return rev;
}
int main()
{
	int num,rev;
	scanf("%d",&num);
	rev=reverse(num);//fun call
	printf("%d",rev);
	return 0;
}
//name,how args,datatypes,return
//reverse,1, int,int
/*
sample input:


sample output:

*/














