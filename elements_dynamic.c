#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int *org_elements(int *arr,int *size)
//1 2 4 2 3 4 1; 7
{
	int i,*res,ec=0,j,f;
	res=calloc(*size,sizeof(int));//1 2 4 2 3 4 1
	for(i=0;i<*size;i++)//4
	{
		f=0;
		for(j=0;j<ec;j++)//
		{
			if(arr[i]==res[j])//1==4; 2==4 4==4
			{
				f=1;
				break;
			}
		}
		if(f==0)//
		{
			res[ec++]=arr[i];// res[0]=1; res[1]=2; res[2]=4;res[3]=3;ec=4
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
	res=org_elements(arr,&size);//fun call
	for(i=0;i<size;i++)
	{
		printf("%d ",res[i]);
	}
	return 0;
}

/*
// 7
// 0 1 2 3 4 5 6
// 1 2 4 2 3 4 1
   i
   
   j
// 0 1 2 3 4 5 6
// 1 2 4 3
ec=4

// 1 2 4 3





*/
/*
malloc-->   arr=malloc(size*sizeof(int));
calloc-->   arr=calloc(size,sizeof(int));
realloc-->  arr=realloc(arr,sizeof(int)*size);
free-->     free(arr)
*/















