#include<stdio.h>
int main()//4 5=20
{
	int marks[5],i;
	for(i=0;i<5;i++)
	{
		// 0 1 2 3 4
		scanf("%d",marks+i);//&marks[i]; 	//10 20 30 40 50
	}
	printf("%d",marks);//address of first element
	
	//access or display
	
	for(i=0;i<5;i++)//5<5
	{
		//printf("%d ",marks+i);//2424368,2424372,2424376,2424380,2424384
		//printf("%d ",*(marks+i));//10 20 30 40 50
		//printf("%d ",marks[i]);//10 20 30 40 50
		//printf("%d ",i[marks]);//10 20 30 40 50
	}
		
	return 0;
}

// printf("%d",*&a);

/*
sample input:


sample output:

*/






















