#include <stdio.h>
int n = -1;

int main() {
    if(n > 10 && n < 20)
    printf("el numero es mayor que diez, pero menor que 20");

    else if(n==10)
    printf("el numero es diez");

    else if(n > 20)
    printf("el numero es mayor que 20");

    else if(n < 10 && n >=0)
    printf("el numero esta en el rango del 0 al 9");

    else 
    printf("error no quiero numeros negativos\n");
    return 0;
}
