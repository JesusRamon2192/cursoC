#include <stdio.h> 

enum deck 
{
    x=5,
    y=6,
    w=7,
    z=17
} card;

int main() 
{
    card = x;    
    /* printf("Card %d", z); */
    printf("Size of var %i", sizeof(card));
    return 0;
}