#include<stdio.h>

int BinarySearch(int a[], int n, int key)
{
    int low = 0, high = n-1 ,i, mid;
    mid = (low + high )/2;
    while(low<=high)
    {
        if(a[mid]==key)
        {
             return mid+1;
        }  
        else if(a[mid]<key)
        {
             low = mid +1;
        }
        else
        {
            high = mid -1;
        }

        mid = (low + high )/2;
    }
    return -1;
}

int main()
{
    int key, n,a[100],i;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array in sorted order: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    printf("Enter the element to be searched: ");
    scanf("%d",&key);

    printf("Element found at position: %d",BinarySearch(a,n,key));
    return 0;
}