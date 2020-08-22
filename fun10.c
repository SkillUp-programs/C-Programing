#include<stdio.h>
void reverse(int num,int *rev)//rev--> address, *rev is value at that address
{
	int r;
	while(num)
	{
		r=num%10;
		num=num/10;
		*rev=*rev*10+r;
	}
}
int main()
{
	int num,rev=0;
	scanf("%d",&num);
	reverse(num,&rev);//fun call with values
	printf("%d",rev);
	return 0;
}
//name,how args,datatypes,return
//reverse,1, int,int
/*
sample input:


sample output:

*/














