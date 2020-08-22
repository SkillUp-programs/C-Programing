#include<stdio.h>
void reverse(int *num)//
{
	//write your code here
	int rev=0,r,n=*num;
	while(n)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	*num=rev;
}
int main()
{
	int num,rev=0;
	scanf("%d",&num);
	reverse(&num);//fun call with values
	printf("%d",num);//
	return 0;
}
//name,how args,datatypes,return
//reverse,1, int,int
/*
sample input:


sample output:

*/














