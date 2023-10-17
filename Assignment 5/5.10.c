/*
CH-230-A
a5 p10.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>

// countdown function
void countDown(int n) {
   if (n <=0 ) { // base case to stop if n is lower or equal to 0
    return;
   }

   printf("%d ", n); // print value n
   if (n == 1) { // case to print new line after the final value
    printf("\n");
   }
   countDown(n - 1); // function calls itself with n - 1
}

int main() {
    int n;// n variable declaration
    printf("Input an integer: ");
    scanf("%d", &n);// user input of n

    //function call
    countDown(n);

    return 0;
}