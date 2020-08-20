#include<stdio.h>
int main()
{
	int n,r,n1,ec=0,oc=0,dc=0;//
	scanf("%d",&n);//1234
	n1=n;//copy of a number
	while(n)//0
	{
		r=n%10;//1
		n=n/10;//0 	
		if(r%2==0)//1%2==0?
		{
			ec++;//1;2;
		}
		else//r%2==1
		{
			oc++;//0+1;2
		}
		dc++;	//4
		printf("%d %d  %d\n",ec,oc,dc);//1 0 1;1 1 2;2 1 3;2 2 4
	}
	return 0;
}
// 9951722111
/*
sample input:
12345
sample output:

*/

/*
n=1234
r=n%10-->4
n=n/10-->123

r=n%10-->3
n=n/10-->12

r=n%10---> 2
n=n/10---> 1

r=n%10--->1
n=n/10--->0
*/










