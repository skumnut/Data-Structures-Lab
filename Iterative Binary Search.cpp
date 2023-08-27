#include<stdio.h>

int IterativeBinarySearch(int arr[], int low, int high, int num){
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==num){
			return mid;
		}
		if(arr[mid]<num){
			low=mid+1;
		}
		else{
			high=mid-1;
	    }		
	}
	return -1;
}

int main()
{
	int n,a[n],key,j,size;
	printf("Enter the number of elements required: ");
	scanf(" %d",&n);
	printf("\nEnter values of the array: ");
	for(j=0;j<n;j++){
		scanf(" %d",&a[j]);
	}
	printf("\nContents of the array are: \n");
	for(j=0;j<n;j++){
		printf(" %d ",a[j]);
	}
	size=n-1;
	printf("\n\nEnter one of the values from the array to be denoted as key: ");
	scanf("%d",&key);
	int x = IterativeBinarySearch(a,1,size,key);
	if(x==-1){
		printf("Element not found in array");
	}
	else{
		printf("Element found at index: %d",x+1);
	}
	return 0;
}









