#include <stdio.h>
#include <stdlib.h>

struct MyArray
{ 
    int Total_Size;
    int Used_Size;
    int *ptr;
};

void createArray(struct MyArray *a, int tSize, int uSize)
{
    //(*a).Total_Size = tSize;
    //(*a).Used_Size = uSize;
    //(*a).ptr = (int *)malloc(tSize * sizeof(int));

    a->Total_Size = tSize;
    a->Used_Size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void show(struct MyArray *a)
{
    for (int i = 0; i < a->Used_Size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setVal(struct MyArray *a)
{
    int n;
    for (int i = 0; i < a->Used_Size; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main()
{
    int size;
    int capacity;
    printf("enter a Size of element in array: ");
    scanf("%d", &size);
    printf("enter a capacity of an array : ");
    scanf("%d", &capacity);
    struct MyArray marks;
    createArray(&marks, capacity, size);
    printf("we are running setVel now\n");
    setVal(&marks);
    printf("we are running show now\n");
    show(&marks);

    return 0;
}