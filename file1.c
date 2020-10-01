#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[100];
	scanf("%[^\n]s",&str);
	fp=fopen("output.txt","w");
	//fputs(str,fp);
	fprintf(fp,str);
	fclose(fp);
	return 0;
}
