/* In-place merge two sorted arrays.
Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of
array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ]
with remaining elements.
For example,
Input:
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }
Output:
X[] = { 1, 2, 3, 4, 7 } */


#include <stdio.h>

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void sort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int num1[] = {1,4,7,8,10};
	int num2[]={2,3,9};
	int ans[8];
	int k=0;
	int i;
	for(i=0;i<sizeof(num1)/sizeof(num1[0]);i++){
	    ans[k]=num1[i];
	    k++;
	}
for(i=0;i<sizeof(num2)/sizeof(num2[0]);i++){
	    ans[k]=num2[i];
	    k++;
	}

	sort(ans,sizeof(ans)/sizeof(ans[0]));
	
	k=0;
	for(i=0;i<sizeof(num1)/sizeof(num1[0]);i++){
	    num1[i]=ans[k];
	    k++;
	}
for(i=0;i<sizeof(num2)/sizeof(num2[0]);i++){
	    num2[i]=ans[k];
	    k++;
	}
	printf("{ ");
	for(i=0;i<sizeof(num1)/sizeof(num1[0]);i++){
	    printf("%d ",num1[i]);
	}
	printf("}");
	
	printf("\n");
	printf("{ ");
	for(i=0;i<sizeof(num2)/sizeof(num2[0]);i++){
	    printf("%d ",num2[i]);
	}
	printf("}");
    printf("\n");
	return 0;
}
