#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
	char name[100];
	char rollno[100];
	int m1,m2,m3,total;
	float per;
};
typedef struct Student std;
int cmpfun(const void *a,const void * b)
{
	return (((std *)b)->total - ((std *)a)->total);//5-10
	//return strcmp(((std *)a)->name ,((std *)b)->name);//5-10
}
void score(std *students,int n)
{
	int i,tot=0;
	for(i=0;i<n;i++)
	{
		students[i].total=students[i].m1+students[i].m2+students[i].m3;
		students[i].per=students[i].total/3.0;
	}
}


int main()
{
	int n,i;
	char *topper;
	std *students;
	scanf("%d",&n);//5
	students=(std *)malloc(n*sizeof(std));
	for(i=0;i<n;i++)
	{
		scanf(" %[^\n]s",&students[i].name);
		scanf(" %[^\n]s",&students[i].rollno);
		scanf("%d%d%d",&students[i].m1,&students[i].m2,&students[i].m3);
	}
	score(students,n);//fun call
	printf("Before soring\n");
	for(i=0;i<n;i++)
	{
		printf("%s %s %d %d %d %d %.2f\n",students[i].name,students[i].rollno,students[i].m1,students[i].m2,students[i].m3,students[i].total,students[i].per);
	}
	qsort(students,n,sizeof(std),cmpfun);//fun call
	printf("After soring\n");
	for(i=0;i<n;i++)
	{
		printf("%s %s %d %d %d %d %.2f\n",students[i].name,students[i].rollno,students[i].m1,students[i].m2,students[i].m3,students[i].total,students[i].per);
	}
}









