#include<stdio.h>

void BubbleSort(int a[], int n)
{
    int i, temp;
    for( i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
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

    BubbleSort(a,n);

    printf("Sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}