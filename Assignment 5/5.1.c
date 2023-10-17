/*
CH-230-A
a5 p1.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>

// Triangle maker function
void charTriangle(int n, char ch) {
    // variable to decrease amount of times to print char by 1
    int x = n;
    //outer loop for rows
    for (int i = 0; i < n; i++) {
        //inner loop for amounf of chars
        for (int j = 0; j < x; j++) {
            printf("%c", ch);
        }
        x--;
        //newline every loop
        printf("\n");
    }
}

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    char ch;
    scanf(" %c", &ch);
    
    charTriangle(n, ch);

    return 0;
}