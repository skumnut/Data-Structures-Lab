#include<stdio.h>

 int search(int b[],int key)
{
	int i;
	for(i=0;i<5;i++){
		if(b[i]==key){
		printf("The index of entered value in array is %d",i+1);
		return 1;
	}
	}
	printf("The entered value does not exist in the array");
	return 0;
}

int main()
{
	int a[5],key,j;
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
	int x = search(a,key);
	return 0;
}
