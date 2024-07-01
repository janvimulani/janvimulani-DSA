#include <stdio.h>
#include <stdlib.h>
#include <time.h> // added for rand() function

int array[20];
int size;
int i;

void random() {
    printf("Enter the size: ");
    scanf("%d", &size);
    srand(time(NULL)); // initialize random number generator
    for (i = 0; i < size; i++) {
        array[i] = (rand() % 10) + 1;
    }
}

void display() {
    for (i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}

void check() {
    int n;
    printf("Enter the element: ");
    scanf("%d", &n);

    int found = 0;
    for (i = 0; i < size; i++) {
        if (array[i] == n) {
            printf("%d is a number at index %d\n", n, i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("The number is not in the array.\n");
    }
}

int main() {
    random();
    display();
    check();
    return 0;
}