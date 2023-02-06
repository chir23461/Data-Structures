// Implementations of linked lists:
// Linked lists are implemented in     language using a structure. You can refer to the snipped below.

// Understanding the snippet below:
// 1.) we construct a structure named Node.
// 2.) Define two of its members, an integer data, which holds the node's data, and a structure pointer, next, which points to the address of the next structure node.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next; // self referencing structure
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // Link head and second nodes
    head->data = 675;
    head->next = second;
    // Link second and third nodes
    second->data = 234;
    second->next = third;
    //  Terminate the list at the third node
    third->data = 66;
    third->next = NULL;

    linkedListTraversal(head);
    return 0;
}