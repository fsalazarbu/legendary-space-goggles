/*
CH-230-A
a6 p2.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>

#define LEASTSIG_BIT(ch) ((ch) & 1)


int main() {
    unsigned char a;

    a = getchar();
    printf("The decimal representation is: %u\n", (unsigned)a);

    unsigned char lsb = LEASTSIG_BIT(a);
    printf("The least significant bit: %u\n", (unsigned)lsb);

    
    return 0;
}