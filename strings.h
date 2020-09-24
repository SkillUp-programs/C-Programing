#include<stdio.h>
int string_copy(char *str1,char *str2)
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];//t h i s i s s u duhir
	}
	str2[i]='\0';//imp point
	return i;
}

int string_len(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
void string_rev(char *str,char *rev)//sudhir 
{
	int j,i,len=string_len(str);//len=6
	for(j=0,i=len-1;i>=0;i--,j++)
	{
		rev[j]=str[i];
	}
	rev[len]='\0';//imp
	
	/*
	j=len-1;//5
	for(i=0;i<len;i++)//i=1;1<6
	{
		rev[j]=str[i];//u
		j--;//
	}
	rev[len]='\0';
	*/
	
}


char * str_rev(char *str)
{
	static char rev[100];
	int j,i,len=string_len(str);//len=6
	for(j=0,i=len-1;i>=0;i--,j++)
	{
		rev[j]=str[i];
	}
	rev[len]='\0';//imp
	return rev;
}

/*
s u d h i r
0 1 2 3 4 5
    i

rev:
        u s
0 1 2 3 4 5
      j
*/

void string_concat(char *str1,char *str2)
{
	int i,j,len1=string_len(str1),len2=string_len(str2);
	str1[len1]=' ';
	for(i=0,j=len1+1;i<len2;i++,j++)
	{
		//printf("%d ",j);
		str1[j]=str2[i];//sudhirc programing 
	}
	str1[len2+len1+1]='\0';
}
//sudhir
//c program




//21/09/2020
int word_count(char *str)
{
	int len=string_len(str);
	int i,sp=0;
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			sp++;
		}
	}
	return sp+1;
}


int camelcase_count(char *str)//ThisIsSudhir
{
	int len=string_len(str);
	int i,wc=0;
	for(i=0;i<len;i++)
	{
		if(str[i]>=65 && str[i]<=90)//T
		{
			wc++;
		}
	}
	return wc;
}


char *camelcase_str(char *str)
{
	int len=string_len(str);
	int i,j;
	static char str1[100];//j is for str1
	for(i=0,j=0;i<len;i++,j++)
	{
		if(str[i]>=65 && str[i]<=90 && i!=0)//T
		{
			str1[j++]=' ';
		}
		str1[j]=str[i];
	}
	str1[j]='\0';
	return str1;
}



char * Toggle_case(char *str)
{
	int len=string_len(str);
	int i;
	static char str1[100];//j is for str1
	//printf("%s",str);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			str1[i]=str[i];
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			str1[i]=str[i]+32;
		}
		else
		{
			str1[i]=str[i]-32;
		}
	}
	str1[i]='\0';
	return str1;
}

//22/09/2020
int string_compare(char *str1,char *str2)//sidhir sudhir
{
	int len1,len2,i;
	len1=string_len(str1);//6
	len2=string_len(str2);//6
	if(len1==len2)//6==6
	{
		///main logic
		for(i=0;i<len1;i++)//i   u
		{
			if(str1[i]!=str2[i])//i!=u
			{
				return 0;
			}
		}
		return 1;
	}
	else
	{
		return 0;
	}
}
//sudhir
int isanagram(char *str1,char *str2)
{
	int len1,len2,i,a[26]={0},b[26]={0};
	len1=string_len(str1);//6
	len2=string_len(str2);//6
	if(len1==len2)
	{
		//main logic
		for(i=0;i<len1;i++)
		{
			if((str1[i])>=97 && str1[i]<=122)
			{
				a[str1[i]-97]++;
			}
			else if(str1[i]>=65 && str1[i]<=90)
			{
				a[str1[i]-65]++;
			}
		}
		
		for(i=0;i<len2;i++)
		{
			if((str2[i])>=97 && str2[i]<=122)
			{
				b[str2[i]-97]++;
			}
			else if(str2[i]>=65 && str2[i]<=90)
			{
				b[str2[i]-65]++;
			}
		}
		for(i=0;i<26;i++)
		{
			if(a[i]!=b[i])
			{
				return 0;
			}
		}
		return 1;
	}
	else
	{
		return 0;
	}
	
}

//cdefz
// 0 0 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

// 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

// abcd

//23/09/2020
int ispangram(char *str)
{
	int i,a[26]={0},len=string_len(str);
	for(i=0;i<len;i++)
	{
		if((str[i])>=97 && str[i]<=122)
		{
			a[str[i]-97]++;
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		//printf("%d ",a[i]);
		if(a[i]==0)
			return 0;
	}
	return 1;
}
/*
a[26]=[1,1,0,0,0,0,0,1,,0]

*/


int count_chars(char *str1,char *str2)
{
	int i,len1,len2,a[26]={0},b[26]={0},c=0;
	len1=string_len(str1);
	len2=string_len(str2);
	for(i=0;i<len1;i++)
	{
		if((str1[i])>=97 && str1[i]<=122)
		{
			a[str1[i]-97]++;
		}
		else if(str1[i]>=65 && str1[i]<=90)
		{
			a[str1[i]-65]++;
		}
	}
		
	for(i=0;i<len2;i++)
	{
		if((str2[i])>=97 && str2[i]<=122)
		{
			b[str2[i]-97]++;
		}
		else if(str2[i]>=65 && str2[i]<=90)
		{
			b[str2[i]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		//printf("%d ",a[i]);
		if(a[i]!=0 && b[i]!=0)
		{
			//3 //2
			if(a[i]==b[i])
			{
				c+=a[i];
			}
			else if(a[i]>b[i])
			{
				c+=b[i];
			}
			else
			{
				c+=a[i];
			}
		}
	}
	return c;
	
}

//2 0 0 0 1 0 0 0 1 0 1 0
//1 0 0 1 1 0 0 0 0 1 1 0
//2


char max_char(char *str)
{
	int i,len=string_len(str),a[26]={0},max=0,mi=0;
	for(i=0;i<len;i++)
	{
		if((str[i])>=97 && str[i]<=122)
		{
			a[str[i]-97]++;
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			mi=i;
		}
	}
	return mi+65;//mi+97
}


//24/09/2020
int find_vowel_count(char *str)
{
	int i,vc=0,a[26]={0},len=string_len(str);
	for(i=0;i<len;i++)//sudhir
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='0' || str[i]=='u')
		{
			a[str[i]-97]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			vc++;//unique vowel count
			//vc+=a[i];//vowel count
		}
	}
	return vc;
}


char * unique_chars(char *str)
{
	int i,len=string_len(str),a[26]={0},k=0;
	static char str2[100];
	for(i=0;i<len;i++)
	{
		if((str[i])>=97 && str[i]<=122)
		{
			a[str[i]-97]++;
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-65]++;
		}
	}
	for(i=0;i<len;i++)
	{
		//printf("%d %c\n",str[i]-97,str[i]);	
		if((a[str[i]-97])!=0)
		{
			//printf("%c ",str[i]);
			str2[k++]=str[i];
			a[str[i]-97]=0;//imp point
		}
	}
	return str2;
}
//aasdvasvavda
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 3 0 0 0 0

//asd


char first_unique_char(char *str)
{
	int i,len=string_len(str),a[26]={0};
	for(i=0;i<len;i++)
	{
		if((str[i])>=97 && str[i]<=122)
		{
			a[str[i]-97]++;
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-65]++;
		}
	}
	for(i=0;i<len;i++)
	{
		if(a[str[i]-97]==1)
		{
			return str[i];
		}
	}
	return -1;
}








