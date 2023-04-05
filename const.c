#include <stdio.h> 

/* const int COSTOHOTDOG = 100;
const float BILL = 100.57;
const char NEWLINE = '\n';

#define LENGTH 3 */

#define PIZZACOST 1.5
const char NEWLINE = '\n'; 

int main() {
    float costoPizzas;
    float numberOfSlices = 1;
    costoPizzas = PIZZACOST * numberOfSlices;

    printf("Total bill: %c %f", NEWLINE, costoPizzas);
}