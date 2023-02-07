#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *create_Node_In_Linked_list(Node *head)
{
    int data;
    printf("Enter the data of Linked list: \t");
    scanf("%d", &data);
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;
    Node *ptr;
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
void print_Linked_list(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        printf("Element is: %d\t\n", p->data);
        p = p->next;
    }
}

int main()
{
    int n, i;
    printf("Enter a number of nodes in linked list : \t");
    scanf("%d", &n);
    Node *head = NULL;
    for (i = 0; i < n; i++)
    {
        head = create_Node_In_Linked_list(head);
    }
    print_Linked_list(head);
    return 0;
}
