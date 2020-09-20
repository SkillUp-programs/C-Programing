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














