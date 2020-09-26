#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[100];
	int marks;
};

typedef struct Student std;

std * fun(std *students,int n)
{
	return students;
	
}

std *students;
int main()
{
	int n,i;
	std *s2;//imp
	scanf("%d",&n);//10
	students=(std *)malloc(n*sizeof(std));//
	for(i=0;i<n;i++)
	{
		scanf(" %[^\n]s",&students[i].name);
		scanf("%d",&students[i].marks);
	}
	
	s2=fun(students,n);//fun call
	for(i=0;i<n;i++)
	{
		printf("%s",s2[i].name);
		printf(" %d\n",s2[i].marks);
	}
	return 0;
}






