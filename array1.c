#include<stdio.h>
int main()//4 5=20
{
	int marks[5],i;
	//reading
	for(i=0;i<5;i++)
	{
		// 0 1 2 3 4
		scanf("%d",&marks[i]);	
	}
	
	//access or display
	for(i=0;i<5;i++)//5<5
	{
		printf("%d ",marks[i]);//0 1 2 3 4
	}
			
	return 0;
}

/*
sample input:


sample output:

*/






















