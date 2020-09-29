#include<stdio.h>
#define fun(X) (X)*(X)
#define max 1000
int main()
{
	int a=10,b=2;
	printf("%d",fun(a+b));//(10+2)*(10+2)-->144
	return 0;
}
/*
int main()
{
	int a=10;
	printf("%d",a+a);
	return 0;
}
*/
