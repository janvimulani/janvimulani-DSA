#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("list is empty....\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int main()
{
    int ch;
    printf("1.insertend :\n");
    printf("2.display :\n");

    do
    {
        printf("enter your ch:");
        scanf("%d", &ch);

        int data, position;
        switch (ch)
        {
        case 1:
            printf("enter data:");
            scanf("%d", &data);
            insertend(data);
            break;

        case 2:
            display();
            break;

        default:
            printf("wrong ch:");
            break;
        }
    }

    while (ch != 0);
}
