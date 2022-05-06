#include "ll.h"

node* create_node(int value)
{
    node* temp;
    temp= (node*)malloc(sizeof(node));
    temp->data= value;
    temp->next= NULL;

    return temp;
}

void append(node** head,int value)
{
    node* temp;
    temp= create_node(value);
    node* current= *head;

    if(*head==NULL)
    {
        *head= temp;
        return;
    }

    while(current->next!=NULL)
    {
        current = current->next;
    }
    current->next= temp;
}

void traverse(node* head)
{
   
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
