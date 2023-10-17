/*
CH-230-A
a6 p1.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>

#define SWAP(a, b, type)\
 do {type digit = a; a = b; b = digit;} while (0)

int main() {
    int num1, num2;
    double num3, num4;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%lf", &num3);
    scanf("%lf", &num4);

   SWAP(num1, num2, int);
   SWAP(num3, num4, double);

   printf("%d\n", num1);
   printf("%d\n", num2);
   printf("%.6lf\n", num3);
   printf("%.6lf\n", num4);

    return 0;
}