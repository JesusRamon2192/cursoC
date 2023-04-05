#include <stdio.h>
int opt1= 1;
int opt2 = 0;



int main (){

    //este programa genramenus segun el usuario elija
printf("bienvenidos, elija una opcion:\n");
printf("0 para bebidas\n");
printf("1 para comidas\n");
printf("2 para postres\n");
    if(opt1==0){
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas, elija una:\n");
        printf("0 para cocacola\n");
        printf("1 para pepsi\n");
        printf("2 para sprite\n");
        
        if (opt2==0)
        printf("usted eligio la opcion 0, sera cocacola");
        else if (opt2==1)
        printf("usted eligio la opcion 1, sera pepsi");
        else if (opt2==2)
        printf("usted eligio la opcion 2, sera sprite");
        else
        printf("opcion invalida");}
        
    else if (opt1==1){
        printf("usted eligio la opcion 1, vera nuestro menu de comidas, elija una:\n");
        printf("0 para hambuerguesa\n");
        printf("1 para pizza\n");
        printf("2 para hotdog\n");
        
        if (opt2==0)
        printf("usted eligio la opcion 0, sera hambuerguesa");
        else if (opt2==1)
        printf("usted eligio la opcion 1, sera pizza");
        else if (opt2==2)
        printf("usted eligio la opcion 2, sera hotdog");
        else
        printf("opcion invalida");}
    
    else if (opt1==2){
        printf("usted eligio la opcion 2, vera nuestro menu de postres, elija una:\n");
        printf("0 para pastel\n");
        printf("1 para helado\n");
        printf("2 para arroz con leche\n");
        
        if (opt2==0)
        printf("usted eligio la opcion 0, sera pastel");
        else if (opt2==1)
        printf("usted eligio la opcion 1, sera helado");
        else if (opt2==2)
        printf("usted eligio la opcion 2, sera arroz con leche");
        else
        printf("opcion invalida");}

        
    else
    printf("opcion invalida");
    return 0;
}
