#include<stdio.h>

int bin_search(int b[], int key, int l, int h)
{
	while(l<h)
	{
		int mid=(l+h)/2;
		
	}
}

int main()
{
	int a[5],key,h,l,j,;
	printf("Enter values of the array: ");
	for(j=0;j<5;j++){
		scanf(" %d",&a[j]);
	}
	printf("\nContents of the array are: \n");
	for(j=0;j<5;j++){
		printf(" %d ",a[j]);
	}
	printf("\n\nEnter one of the values from the array: ");
	scanf("%d",&key); 
	l=1;
	h=5;
	int mid=(l+h)/2;
	if(key==mid)
	{
		printf("\nMid element is key ");
		return mid;
	}
	if(key>mid)
	{
		int x = bin_search(mid+1,l,key,b);	
	}
	if(key<mid)
	{
		int y = bin_search(a,key,l,mid-1);
	}
	return 0;
}
