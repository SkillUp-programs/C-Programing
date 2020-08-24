#include<stdio.h>
int gcd(int a,int b)//28 60
{
	int t=2,res=1;//t=2 res=1
	while(a>=t && b>=t)//a<t or b<t
	{
		if(a%t==0 && b%t==0)//7%7==0 and 15%7==0
		{
			a=a/t;//7
			b=b/t;//15
			res=res*t;//res=4=1*2*2
		}
		else
		{
			t++;//3,4,5,6,7,8
		}	
	}
	//printf("%d %d %d %d\n",res,a,b,t);
	return res;
}
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	res=gcd(a,b);//fun call
	printf("%d",res);//24
	return 0;
}

/*
sample input:


sample output:

*/

/*
t  a   b
2  12 24
------------
2   6  12
-----------
3   3   6
----------
    1   2===24


2  64 96
---------
2  32 48
----------
2   16 24
---------
2   8    12
------------
2    4     6
------------
   2    3-----> 64*3=192
-------------

2  28 60
---------
   14  30
----------





*/












