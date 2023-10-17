/*
CH-230-A
a6 p3.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/

#include <stdio.h>

// get the larget number out of 2 numbers
#define MAX2(a, b) \
    ((a) > (b) ? (a) : (b))

// get the larget number out of the first function and c
#define MAX(a, b, c) \
    (MAX2(MAX2(a, b), c))

// get the smalles number out of 2 numbers
#define MIN2(a, b) \
    ((a) < (b) ? (a) : (b))

// get the smallest number out of the first function and c
#define MIN(a, b, c) \
    (MIN2(MIN2(a, b), c))

// mid range function
#define MID_RANGE(MAX, MIN) \
    (MAX + MIN) / 2



int main() {
    // integers declaration
    int a, b, c;

    // user input of the 3 integers
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // call to the MAX and MIN macro functions
    double max = MAX(a, b, c);
    double min = MIN(a, b, c);

    // call to the MID_RANGE macro function
    double mr = MID_RANGE(max, min);

    // print the returned value of MID_RANGE
    printf("The mid range is: %.6lf\n", mr);

    return 0;
}