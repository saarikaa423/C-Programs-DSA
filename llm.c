#include "ll.h"

int main()
{
    node* head= NULL;

    int p1,e1;
    append(&head, 5);
    append(&head, 10);
    append(&head, 15);
    append(&head, 20);
    append(&head, 55);
    append(&head, 30);
    printf("Original list is: ");
    traverse(head);
    printf("\nEnter the element to be added and its position: ");
    scanf("%d%d", &e1,&p1);

    return 0;
}