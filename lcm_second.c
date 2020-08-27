#include<stdio.h>
int lcm_second(int l,int s)//12 26
{
	int temp,i=1;//26 12
	if(l<s)
	{
		temp=l;
		l=s;
		s=temp;
	}
	//main logic
	while(1)//s=12 l=26, i=6
	{
		if((l*i)%s==0)//156%12==0
		{
			return l*i;
		}
		i++;
	}	
}
int main()
{
	int lcm,a,b;
	scanf("%d%d",&a,&b);
	lcm=lcm_second(a,b);//fun call
	printf("%d",lcm);
	return 0;
}

/*
sample input:
12 32
l=32*3
s=12

32%12

96
sample output:

*/
