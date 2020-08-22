#include<stdio.h>
int multy(int num1,int num2)//fun def
{
	int res=0;
	while(num1)	
	{
		if(num1%2==1)//3
		{
			res=res+num2;//res=128
		}
		num1=num1/2;//1  0
		num2=num2*2;//256	
	}
	return res;	
}
int main()
{
	int num1,num2,res;
	scanf("%d%d",&num1,&num2);//24 16
	res=multy(num1,num2);//fun call
	printf("%d",res);
	return 0;
}



/*
Russian Peasant multiplication
24 * 16
--------
24    16  X
12    32  X
6     64  X

3    128  +
1    256  +
    -----
     384 
     
13 24 +
6  48 X
3  96  +
1  192  +
-------
   312  
     
     
     
*/









