#include<stdio.h>
struct details{	
	int a;
	double c;
	int b;
};

struct details s1;
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}
/*
11110000
11111111
11110000
*/
