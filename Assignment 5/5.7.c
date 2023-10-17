/*
CH-230-A
a5 p7.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char arr1[100],arr2[100];

    fgets(arr1, sizeof(arr1), stdin);
    fgets(arr2, sizeof(arr2), stdin);

    char* string = NULL;

    string = (char*) malloc(strlen(arr1) * sizeof(char));

    strcpy(string, arr1);

    string = realloc(string, strlen(arr2) * sizeof(char));

    strcat(string, arr2);

    printf("Result of concatenation: %s", string);

    free(string);
    return 0;
}