#include <stdio.h> 

//Variable declarations
extern int a, b, c;

float f, g, h;

int main() 
{
    //Variable definition
    int a, b, c;

    //Variable initialization
    g = 1000.999999;
    f = 1.111111;

    h = g + f;


    printf("Value of sum is: %f\n", h);
    return 0;
}