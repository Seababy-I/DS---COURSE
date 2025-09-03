/*1. Write a small function to find the smallest element in an array using pointers.
In the main function, create a dynamically allocated array, read the values from the
keyboard, and pass the array to the function.
Display the result (smallest element) in the main function.
*/

#include<stdio.h>
#include<stdlib.h>

int Smallest(int *a,int n)
{
    int i, *ptr, min;
    ptr = a;
    min = *ptr;

    for(i=1; i<n; i++)
    {
        if(*(a+i)<min) 
        {
            min = *(a+i);;
        }
    }
    return min;
}

int main()
{
    int n, *a, i, small;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small = Smallest(a,n);
    printf("Smallest element in the array is: %d",small);
    return 0;
}