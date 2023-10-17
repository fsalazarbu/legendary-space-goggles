/*
CH-230-A
a5 p2.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>

//divisor by 5 function
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] /= 5;
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}

int main() {
    //array variable initialization and declaration
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};

    // get size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before:\n");
    // display of original array
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    printf("After:\n");
    divby5(arr, size);

    return 0;
}