#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp1;
	char ch,*str;
	int i=0;
	fp=fopen("data.txt","r");//opening a file
	if(fp==NULL)
	{
		printf("File is not Found");
	}
	else
	{
		fp1=fopen("output1.txt","a");
		str=malloc((i+1)*sizeof(char *));
		while(1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
			{
				str[i]='\0';
				break;
			}
			str[i++]=ch;//2
			str=(char *)realloc(str,(i+1));//3
		}
	}
	//printf("%s",str);
	fputs(str,fp1);
	printf("Data copied");
	fclose(fp);
	fclose(fp1);//close the file
	return 0;
}
