#include<stdio.h>
int rotation(int num,int rot)//2
{
	int dc=0,n=num,c=1,r,d;
	while(n)
	{
		n=n/10;
		dc++;
		c=c*10;
	}//dc=4
	c=c/10;//c=1000
	rot=rot%dc;
	for(r=1;r<=rot;r++)//1234;4123
	{
		d=num%10;//d=3
		num=num/10;//num=412
		num=(d*c)+num;//3412
	}
	return num;
	
}
int main()
{
	int num,rot,res;
	scanf("%d%d",&num,&rot);
	res=rotation(num,rot);//fun call
	printf("%d",res);
	return 0;
}

/*
sample input:
1234  2

r=4
num=123
4+123

*/














