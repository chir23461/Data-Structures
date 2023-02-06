#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
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
struct Node *delete_first_node(struct Node *head) {
    struct Node *ptr = head;
    head = head -> next;
    return head;
    free(ptr);

}
struct Node *delete_at_index(struct Node *head, int index) {
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i = 0; i < index - 1;i++) {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;

}
struct Node *delete_at_last(struct Node *head) {
    struct Node *p = head;
    struct Node *q = head->next;
    while(q -> next != NULL) {
        p = p->next;
        q = q->next;
    }
    p -> next = NULL;
    free(q);
    return head;
}
void print_a_linked_list(struct Node *head) {
    struct Node *p = head;
    while (p != NULL)
    {
        printf("Element is: %d\t\n", p->data);
        p = p->next;
    }
}


int main() {
    int n,D,i,data,info;
    printf("enter a number of nodes : ");
    scanf("%d",&n);

    printf("enter a node which delete in linked list: ");
    scanf("%d",&D);

    struct Node *head = NULL;
    for(i = 0; i < n; i++) {
      head = create_Node_In_Linked_list(head);
    }
    //head = delete_first_node(head);
    if(D < n) {
        //head = delete_at_index(head, D);
    }
    else{
        //printf("deletion is not possible.");
    }
    head = delete_at_last(head);
    print_a_linked_list(head);

}

