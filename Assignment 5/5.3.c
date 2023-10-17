/*
CH-230-A
a5 p3.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/

#include <stdio.h>

// lowercase char counter function
int count_lower(char* str) {
    //counter variable to keep track of lowercases
    int count = 0;
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') { // adds 1 to count if there is a char between a and z
            count++;
        }
        str++; // moves the ptr to the next char in the array
    }
    return count;
}

int main() {
    char str[50];

    // loop to iterate infinitly
    while (1) {
        printf("Write a string:\n");
        fgets(str, sizeof(str), stdin); //gets line inputed by the keyboard
        
        // if there is no chars in str, break
        if (str[0] == '\n') {
            break;
        } 
        else {
            printf("Amount of lower cases: %d\n", count_lower(str));
        }
    }
    return 0;
}