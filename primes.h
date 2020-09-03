#include<stdio.h>
#include<math.h>
int isprime(int num)
{
	int i;
	if(num==1)
	{
		return 0;
	}
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}






int isprim(int num)
{
	
}



int nearest_prime(int l,int r)
{
	int lp,rp;
	while(1)
		{
			lp=isprime(l);//1
			rp=isprime(r);//0
			if(lp && rp)//
			{
				printf("%d %d",l,r);
				break;
			}
			else if(lp)//1
			{
				printf("%d",l);
				break;
			}
			else if(rp)//0
			{
				printf("%d",r);
				break;
			}
			else
			{
				l--;//23
				r++;//27
			}
		}
}


int megaPrime(n)//977
{
	int r;
	while(n)//9
	{
		r=n%10;//9
		n=n/10;//0
		if(!isprime(r))//isprime(9)-->0==0
		{
			return 0;
		}
	}
	return 1;
}

int reverse(num)
{
	int r,rev=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	return rev;
}
int preprime(num)//19
{
	int i=1;
	while(1)
	{
		if(isprime(num-i))//19-2
		{
			return num-i;
		}
		i++;
	}
}

int isspprime(int n)
{
	int p1,p2,c=1,num;//n=19
	num=n;//copy of org value
	while(p2!=2)
	{
		p1=preprime(n);//13
		p2=preprime(p1);//11
		printf("%d %d\n",p1,p2);
		if(p1+p2+c==num)
		{
			return 1;
		}
		n=p1;//17
	}
	return 0;
}



int find_pos(int num)
{
	int pos=0,i;
	for(i=2;i<=num;i++)//2 3 4 5 6 7 8 9 10 11
	{
		if(isprime(i))
		{
			pos++;
		}
	}
	return pos;
}

int find_pos_rec(int num)//10
{
	if(num==2)
	{
		return 1;
	}
	if(isprime(num))//10
	{
		return 1+find_pos_rec(num-1);
	}
	return 0+find_pos_rec(num-1);	
}

int nth_prime(num,pos)//100 5
{
	int i=0,k=1;
	while(1)//
	{
		if(isprime(num+k))//111
		{
			i++;//5
			if(i==pos)//5==5
			return num+k;//111
		}
		k++;//11
	}	
}
















