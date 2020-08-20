/*
with args with out return type
with args with single value as return
2parts in funs:
1. fun call
2. fun def
*/
#include<stdio.h>
int sum(int a, int b)//fun def
{
	return a+b;
}
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	res=sum(a,b);//fun call: name; args; args datatypes;return type
	printf("%d",res);
	return 0;
}


