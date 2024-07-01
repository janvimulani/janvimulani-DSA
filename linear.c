#include <stdio.h>
#include <stdlib.h>
int array[20];
int size;
int i;
void random()
{
    printf("enter the size:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        array[i] = (rand() % 10) + 1;
    }
}
void display()
{
    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}
void check()
{
    int n;
    printf("enter the element:");
    scanf("%d", &n);

    int che = 0;
    for (i = 0; i < size; i++) 
    {
        if (array[i] == n)
            printf("%d is a number %d", n, i);
        che = 1;
        break;
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