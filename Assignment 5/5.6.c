/*
CH-230-A
a5 p6.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    float* ptr;

    ptr = (float*) malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        scanf("%f", ptr + i);
    }

    float* ptr = &arr[0];
    for (int i = 0; i < n; i++) {
        if (*ptr < 0) {
            printf("Before the first negative value: %d elements\n", i);
            break;
        }
        ptr++;
    }

    return 0;
}