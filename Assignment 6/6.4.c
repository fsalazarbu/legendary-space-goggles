/*
CH-230-A
a6 p4[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/

#include <stdio.h>

#define INTERMEDIATE(v1, v2, index)\
    ((v1)[(index)] * (v2)[(index)])

// scalar product function
int scalar_product(int v1[], int v2[], int n) {
    int scalar_product = 0;
    for (int i = 0; i < n; i++) {
        scalar_product += (v1[i] * v2[i]);
    }
    return scalar_product;
}

int main() {
    //variable n and vector declaration
    int n;
    scanf("%d", &n);//user input for n
    int v1[n];
    int v2[n];

    //input values for first vector
    for (int i = 0; i < n; i++) {
        scanf("%d", &v1[i]);
    }
    //input values for second vector
    for (int i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }
    // intermidiate values display
    #ifdef INTERMEDIATE // conditional compilation
        printf("The intermediate product values are:\n");
        for (int i = 0; i < n; i++) { // loop to go through every mulitplication instance
            int intermediate = INTERMEDIATE(v1, v2, i);
            printf("%d\n", intermediate);
    }
    #endif

    printf("Scalar product is: %d\n", scalar_product(v1, v2, n));// scalar function call and display

    return 0;
}