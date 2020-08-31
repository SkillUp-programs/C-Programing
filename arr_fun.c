#include<stdio.h>
void arr_display(int *m,int size)//*m
{
	//printf("%d\n",*m);//m add, *m
	int i;
	for(i=0;i<size;i++)
	{
		//printf("%d ",m[i]);
		printf("%d ",*(m+i));
	}
}
int main()
{
	int marks[5],i;
	for(i=0;i<5;i++)
	{
		// 0 1 2 3 4
		scanf("%d",marks+i);//&marks[i]; 	//10 20 30 40 50
	}
	arr_display(marks,5);//
	//printf("%d",marks);
	return 0;
}

/*
sample input:


sample output:

*/
