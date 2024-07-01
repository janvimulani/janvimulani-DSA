#include <stdio.h>
int main()
{
    int  n,  x;
    printf("enter n:");
    scanf("%d", &n);

int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter a[%d]:", i);
        scanf("%d", &a[i]);
        
        x = a[0];
    }

    printf("\n swaping value:");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d ", a[i]);
        a[i] = a[i + 1];
    }
    a[n-1]=x;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        a[4] = x;
        printf("%d ", a[i]);
    }
}
