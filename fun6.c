#include<stdio.h>
void multy(int num1,int num2,int *res)//fun def
{
	while(num1)	
	{
		if(num1%2==1)//3
		{
			*res=*res+num2;// 
		}
		num1=num1/2;//1  0
		num2=num2*2;//256	
	}
}

int main()
{
	int num1,num2,res=0;
	scanf("%d%d",&num1,&num2);//24 16
	multy(num1,num2,&res);//fun call  
	printf("%d X %d = %d",num1,num2,res);
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









