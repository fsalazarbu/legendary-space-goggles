/*
CH-230-A
a6 p5.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/

#include <stdio.h>

int main() {
    //char declaration
    unsigned char ch;
    //user input
    scanf("%c", &ch);

    // Creation of bit mask
    unsigned char mask = 1;
    // display of char in decimal representation
    printf("The decimal representation is: %u\n", ch);
    // frist part of the display of char in binary
    printf("The backwards binary representation is: ");

    // loop to repeat comparison 6 times for 6 bits
    for (int i = 0; i < 8; i++) {
        printf("%u", (ch & mask) ? 1 : 0);
        mask = mask << 1;// left shift operator to check the next bit
    }


    printf("\n");


    return 0;
}