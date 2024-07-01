#include <stdio.h>
#include <stdlib.h>
int array[10];
int size;
int i;
void random()
{
    printf("enter size :");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        array[i] = (rand() % 50) + 1;
    }
}
void display()
{
    for (i = 0; i < size; i++)
    {
        printf("%d \n", array[i]);
    }
}
void check()
{
    int s;
    printf("enter the element:");
    scanf("%d", &s);

    int che = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == s)
        {
            printf("%d is a number %d", s, i);
            che = 1;
            break;
        }
    }
    if (che == 0)
    {
        printf("the number not is array");
    }
}
int main()
{
    random();
    display();
    check();
    return 0;
}