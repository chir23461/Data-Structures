#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *create_Node_In_Linked_list(struct Node *head)
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
        printf("Element is: %d\t\n",p->data);
        p=p->next;
    }
}

int main()
{
    int n, i;
    printf("Enter a number of nodes in linked list : \t");
    scanf("%d", &n);
    struct Node *head = NULL;
    for (i = 0; i < n; i++)
    {
        head = create_Node_In_Linked_list(head);
    }
    print_Linked_list(head);
    return 0;
}
