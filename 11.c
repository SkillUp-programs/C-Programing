#include<stdio.h>
 int main()
 {
 	int n,r,i=1;
 	scanf("%d%d",&n,&r);
 	while(n*i<=r)
 	{
 		printf("%d X %d = %d\n",n,i,n*i);// 
 		i++;
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
