#include<stdio.h>

void SelectionSort(int a[], int n)
{
    int i,j,temp,MinIndex;
    for(i=0; i<n ; i++)
    {
        MinIndex = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[MinIndex])
            {
                MinIndex = j;
            }
        }

        if(MinIndex != i)
        {
            temp = a[i];
            a[i] = a[MinIndex];
            a[MinIndex] = temp;
        }
    }
}

int main()
{
    int n, a[100], i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("Sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}