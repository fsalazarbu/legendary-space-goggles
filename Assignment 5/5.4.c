/*
CH-230-A
a5 p4.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//divisor by 5 function
void divby5(int* ptr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)/5);
    }
    printf("\n");
}

int main() {
    //Initialization of integer n
    int n;
    printf("Enter a the number of integers you want to input: ");
    scanf("%d", &n);// n user input

    // creation of point ptr
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int)); //allocate the needed memory size for n

    if (ptr == NULL) {
        printf("Memory cannot be allocated");
        return 0;
    }

    // iteration through every position of n as an array and user input
    for (int i = 0; i < n; i++) {
        printf("Enter integer: ");
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    divby5(ptr, n);

    free(ptr);

    return 0;
}