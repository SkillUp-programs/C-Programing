#include<stdio.h>
int main()
{
	int n=10,i=1;
	while(i<=n)//6<=10
	{
		if(i%3==0)//6%3==0
		{
			i++;//7
			continue;
		}
		printf("%d ",i);//1 2 4 5
		i++;//i=6
		
	}
	//end of the loop
	return 0;
}

// break
//continue



