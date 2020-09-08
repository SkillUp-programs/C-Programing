#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int * uni_elements(int *arr,int *size)
{
	int i,j,*res,cnt,ec=0;
	res=calloc(*size,sizeof(int));//1 2 3 4 1 5 4 3 1
	for(i=0;i<*size;i++)//2
	{
		cnt=0;
		for(j=0;j<*size;j++)// 1 2 3 4 1 5 4 3 1
		{
			if(arr[i]==arr[j])// 2==1
			{
				cnt++;//1
				if(cnt==2)
				{
					break;
				}
			}
		}
		if(cnt==1)
		{
			res[ec++]=arr[i];
		}
	}
	*size=ec;
	return res;
	
}
int main()
{
	int i,size,*arr,*res;
	scanf("%d",&size);//7
	arr=calloc(size,sizeof(int));//dynamic memory using malloc
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=uni_elements(arr,&size);//fun call
	for(i=0;i<size;i++)
	{
		printf("%d ",res[i]);
	}
	return 0;
}

/*
8
1 2 3 4 5 4 3 1
c=1
2 5
*/





/*
malloc-->   arr=malloc(size*sizeof(int));
calloc-->   arr=calloc(size,sizeof(int));
realloc-->  arr=realloc(arr,sizeof(int)*size);
free-->     free(arr)
*/















