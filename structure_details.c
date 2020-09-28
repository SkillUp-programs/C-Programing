#include<stdio.h>
#include<stdlib.h>
struct Student{
	char name[100];
	char rollno[100];
	int m1,m2,m3,total;
	float per;
};
typedef struct Student std;

void student_details(std *students,int n)
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
	std *students;
	scanf("%d",&n);//5
	students=(std *)malloc(n*sizeof(std));
	for(i=0;i<n;i++)
	{
		scanf(" %[^\n]s",&students[i].name);
		scanf(" %[^\n]s",&students[i].rollno);
		scanf("%d%d%d",&students[i].m1,&students[i].m2,&students[i].m3);
	}
	student_details(students,n);//fun call
	for(i=0;i<n;i++)
	{
		printf("%s %s %d %d %d %d %.2f\n",students[i].name,students[i].rollno,students[i].m1,students[i].m2,students[i].m3,students[i].total,students[i].per);
	}
}









