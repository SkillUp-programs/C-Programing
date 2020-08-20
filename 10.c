#include<stdio.h>
 int main()
 {
 	int n,r,i=1;
 	scanf("%d%d",&n,&r);//5 23
 	while(1)//5 5
 	{
 		if((n*i)>r)//25>23
 		{
 			break;
		}
 		printf("%d X %d = %d\n",n,i,n*i);// 
 		i++;//5
	}
	
 	return 0;
 }
 /*
 input:
 5 42
 ouput:
 5 X 1 = 5
 . 
 .
 
 5 X 8 = 40
 */
