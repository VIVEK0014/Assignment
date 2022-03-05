/*Search and Sequence
Consider an integer array ‘a’ of size 10, where the value of the array elements are
{1,5,4,8,9,2,0,6,11,7}. Write a program to
? Find whether the given element exists in an array or not. If the element exists in an
array, display YES else NO.
? To print a number following a sequence of elements in an array i.e., 15489206117. */

#include <stdio.h>
 
int main() 
{
	int x,i;
    int arr[10] = {1, 5, 4, 8, 9, 2, 0, 6, 11, 7};
    for ( i=0;i<10;i++)
    {
    	printf("arr[%d]= %d\n", i,arr[i]);
	}
    printf("\nEnter the element that you have to find in array\n");
    scanf("%d",&x);
    int arrLen = sizeof arr / sizeof arr[0];
    int isElementPresent = 0;
     
    for ( i = 0; i < arrLen; i++) 
	{
        if (arr[i] == x) 
		{
            isElementPresent = 1;
            break;
        }
    }
     
    if (isElementPresent) 
	{
        printf("Yes\n", x);
    } 
	else 
	{
        printf("No\n", x);
    }
    
     for ( i=0;i<10;i++)
    {
    	printf("%d",arr[i]);
	}
     
    return 0;
}
