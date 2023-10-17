/*
CH-230-A
a5 p5.[c or cpp or h]
Felipe Salazar
fsalazarbu@jacobs-university.de
*/
#include <stdio.h>

double scalar_product(double v[], double w[], int n) {
    float scalar_product = 0.0;
    for (int i = 0; i < n; i++) {
        scalar_product += (v[i] * w[i]);
    }
    return scalar_product;
}

// function for smallest and largest for v
void min_maxV(double v[], int n) {
    float min_num = v[0]; //varaible to store lowest number
    int position1 = 0; // variable to store the position
    float max_num = v[0]; // variable to store the largest number
    int position2 = 0; // varaible to store the position

    // main loop to check the numbers
    for (int i = 0; i < n; i++) {
        // check for the lowest number
        if (min_num > v[i]){
            min_num = v[i];
        }
        // check for largest number
        if (max_num < v[i]) {
            max_num = v[i];
        }
    }

    // loop through positions of vector
    for (int i = 0; i < n; i++) {
        //checks the position of lowest num
        if (v[i] == min_num) {
            position1 = i;
            break;
        }
    }

    //loop through positions of vector
    for (int i = 0; i < n; i++) {
        //checks the position of largest num
        if (v[i] == max_num) {
            position2 = i;
            break;
        }
    }
    // All results display
    printf("The smallest = %lf\n", min_num);
    printf("Position of smallest = %d\n", position1);
    printf("The largest = %lf\n", max_num);
    printf("Position of largest = %d\n", position2);
}

// function for smallest and largest for v
void min_maxW(double w[], int n) {
    float min_num = w[0]; //varaible to store lowest number
    int position1 = 0; // variable to store the position
    float max_num = w[0]; // variable to store the largest number
    int position2 = 0; // varaible to store the position

    // main loop to check the numbers
    for (int i = 0; i < n; i++) {
        // check for the lowest number
        if (min_num > w[i]){
            min_num = w[i];
        }
        // check for the highest number
        if (max_num < w[i]) {
            max_num = w[i];
        }
    }
    // loop through positions of vector
    for (int i = 0; i < n; i++) {
        //checks the position of lowest num
        if (w[i] == min_num) {
            position1 = i;
            break;
        }
    }

    //loop through positions of vector
    for (int i = 0; i < n; i++) {
        //checks the position of largest num
        if (w[i] == max_num) {
            position2 = i;
            break;
        }
    }
    //All results display
    printf("The smallest = %lf\n", min_num);
    printf("Position of smallest = %d\n", position1);
    printf("The largest = %lf\n", max_num);
    printf("Position of largest = %d\n", position2);
}

int main() {
    //variable n and vector declaration
    int n;
    scanf("%d", &n);//user input for n
    float v[n];
    float w[n];

    //input values for v
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    //input values for w
    for (int i = 0; i < n; i++) {
        scanf("%f", &w[i]);
    }

    printf("Scalar product=%lf\n", scalar_product(v, w, n));
    min_maxV(v, n);
    min_maxW(w, n);

    return 0;
}