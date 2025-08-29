#include<stdio.h>

int linearSearch(int a[], int n, int target)
{
    for(int i=0; i<n; i++)
    {
        if (a[i] == target)
            return i+1;
    }
}

int main()
{
    int n,a[100],target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    printf("Element found at index : %d", linearSearch(a, n, target));
    return 0;

}