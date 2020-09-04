int main()
{
	int i,size,arr[100],pos;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&pos);
	delete_array(arr,&size,pos);//
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}



//5
//1 2 3 4 5
// 3

//1 2 4 5








