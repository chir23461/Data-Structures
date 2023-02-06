#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *create_Node_In_Linked_list(struct Node *head, int index)
{
    int data;
    printf("Enter the data of Linked list: \t");
    scanf("%d", &data);
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    p->next = NULL;
    struct Node *ptr;
    if (head == NULL)
    {
        head = p;
        ptr = head;
        return head;
    }
    else
    {
        ptr->next = p;
        ptr = p;
        return head;
    }
}
void print_Linked_list(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("Element is: %d\t\n", p->data);
        p = p->next;
    }
}
// case 1: (1) Insert at the beginning.
//         (2) Time complexity : O(1).
struct Node *insertionAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;

    return head;
}
// case 2: (1) Insert node at between a linked list.
//         (2) Time complexity : O(n).
struct Node *insertionAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 1;
    while (i < index)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// case 3: (1) Insert node at the end.
//         (2) Time Complexity : O(n).
struct Node *Insert_at_the_end(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    int n, i, Info, B;
    printf("enter a index of a linked list elements insert between them : ");
    scanf("%d", &B);
    printf("enter a element input insert in the node : ");
    scanf("%d", &Info);
    printf("Enter a number of nodes in linked list : \t");
    scanf("%d", &n);
    struct Node *head = NULL;

    for (i = 0; i < n; i++)
    {
        head = create_Node_In_Linked_list(head, B);
    }
    //head = insertionAtFirst(head, Info);
    if (B < n)
    {
        head = insertionAtIndex(head, Info, B);
    }
    else
    {
        printf("element is not insert between them");
    }
    //head = Insert_at_the_end(head, Info);
    print_Linked_list(head);
    return 0;
}
