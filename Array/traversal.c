#include <stdio.h>

void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n;
    printf("enter a no. of element traverse in array : ");
    scanf("%d", &n);

    printf("enter a number of elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    traversal(arr, n);
}