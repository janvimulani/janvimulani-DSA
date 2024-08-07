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

void insertfirst(int val)
{

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = ptr;
    head = temp;
    return;
}

void insertmid(int val, int position)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;

    while (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}

void deleteend()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("list already empty.....\n");
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = NULL;
    free(ptr);
    return;
}

void deletefirst()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("list already empty.....\n");
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    head = ptr->next;
    free(ptr);
    return;
}

void deletemid(int position)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != position)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = ptr->next;
    free(ptr);
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
    printf("2. deleteend :\n");
    printf("3.display :\n");
    printf("4.insertfirst:\n");
    printf("5.deletefirst:\n");
    printf("6.insertmid:\n");
    printf("7.deletemid:\n");

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
            deleteend();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("enter data:");
            scanf("%d", &data);
            insertfirst(data);
            break;

        case 5:
            deletefirst();
            break;

        case 6:
            printf("enter data:");
            scanf("%d", &data);
            printf("enter position:");
            scanf("%d", &position);
            insertmid(data, position);
            break;

        case 7:
            printf("enter position:");
            scanf("%d", &position);
            deletemid(position);
            break;

        default:
            printf("wrong ch:");
            break;
        }
    }

    while (ch != 0);
}