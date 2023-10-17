/*
CH-230-A
a6 p6.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // unsigned char declaration
    unsigned char ch;
    scanf("%c", &ch);// user input of char
    
    // bit mask to compare to the char operand
    unsigned char mask = 1 << (sizeof(ch) * 8 - 1);

    printf("The decimal representation is: %u\n", ch);// decimal number display

    //loop to through the 8 bits of spaces the binary is worth
    printf("The binary representation is: ");
    for (int i = 0; i < 8; i++) {
        printf("%u", (ch & mask) ? 1 : 0); //Ternary operator to set 0 or 1 if the values match or not at each bit
        mask >>= 1;
    }
    printf("\n");

    return 0;
}