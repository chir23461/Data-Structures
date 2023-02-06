#include <stdio.h>

int index_Insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n, E, index;
    printf("enter a number of element in array : ");
    scanf("%d", &n);
    printf("enter a element which insert in array");
    scanf("%d", &E);
    printf("enter a index which insert a value in array : ");
    scanf("%d", &index);
    printf("enter a number of elements : ");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
    }
    index_Insertion(arr, n, E, 100, index);
    n += 1;
    traversal(arr, n);
}
