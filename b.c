#include <stdio.h> 
#include <stdlib.h> 
#define count 14 
int array[count]; 
void insertData() 
{ 
    for (int i = 0; i < count; i++) 
        array[i] = rand() % 50 + 1; 
} 
void displayData() 
{ 
    for (int i = 0; i < count; i++) 
        printf("%d ", array[i]); 
} 
void bubbleSort() 
{ 
    for (int i = 0; i < count - 1; i++) 
    { 
        for (int j = 0; j < count - i - 1; j++) 
        { 
            if (array[j] > array[j + 1]) 
            { 
                int temp = array[j]; 
                array[j] = array[j + 1]; 
                array[j + 1] = temp; 
            } 
        } 
         //plprintf("\n"); 
        // disayData(); 
    } 
} 
int main() 
{ 
    insertData(); 
    displayData(); 
    bubbleSort(); 
    printf("\n\n"); 
    displayData(); 
    return 0; 
}