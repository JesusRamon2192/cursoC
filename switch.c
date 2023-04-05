#include <stdio.h>

int option1;
int option2;

int main(){
    printf("Binvenidos al Restaurante de comida corrida 'Las Delicias'.\n\nElija una opción del Menú: \n");
    printf("Opción 1: Primer tiempo \n");
    printf("Opción 2: Segundo tiempo \n");
    printf("Opción 3: Tercer tiempo \n");
    printf("Opción 4: Bebidas \n");
    printf("Opción 5: Postres \n");
    scanf("%d",&option1);
    switch (option1){

        case 1:
            printf("Eligió la opción del Primer Tiempo. Elija qué va a consumir: \n\n");

            printf("Opción 1: Caldo de pollo \n");
            printf("Opción 2: Sopa de lentejas \n");
            printf("Opción 3: Caldo Tlalpeño \n");
            printf("Opción 4: Crema de Champiñones \n");
            scanf("%d",&option2);
            switch (option2){
                
                case 1:
                    printf("Usted eligió: Caldo de pollo \n");
                    break;
                case 2:
                    printf("Usted eligió: Sopa de lentejas \n");
                    break;
                case 3:
                    printf("Usted eligió: Caldo Tlalpeño \n");
                    break;
                case 4:
                    printf("Usted eligió: Crema de Champiñones \n");
                    break;
                default:
                    printf("Opción inválida \n");
                    break;
            }

        case 2:
            printf("Eligió la opción del segundo tiempo. Elija qué va a consumir: \n\n");

            printf("Opción 1: Arroz \n");
            printf("Opción 2: Espagueti blanco \n");
            printf("Opción 3: Espagueti rojo \n");
            scanf("%d",&option2);
            switch (option2){

                case 1:
                    printf("Usted eligió: Arroz \n");
                    break;
                case 2:
                    printf("Usted eligió: Espagueti blanco \n");
                    break;
                case 3:
                    printf("Usted eligió: Espagueti rojo \n");
                    break;
                default:
                    printf("Opción inválida \n");
                    break;
            }
        
        case 3:
            printf("Eligió la opción del tercer tiempo. Elija qué va a consumir: \n\n");
            
            printf("Opción 1: Carne asada con ensalada y papas a la francesa \n");
            printf("Opción 2: Hamburguesa con ensalada y papas a la francesa \n");
            printf("Opción 3: Pechuga de Pollo a la plancha \n");
            printf("Opción 4: Pechuga de Pollo empanizada \n");
            printf("Opción 5: Flautas de Pollo \n");
            scanf("%d",&option2);
            switch (option2){

                case 1:
                    printf("Usted eligió: Carne asada con ensalada y papas a la francesa \n");
                    break;
                case 2:
                    printf("Usted eligió: Hamburguesa con ensalada y papas a la francesa \n");
                    break;
                case 3:
                    printf("Usted eligió: Pechuga de Pollo a la plancha \n");
                    break;
                case 4:
                    printf("Usted eligió: Pechuga de Pollo empanizada \n");
                    break;
                case 5:
                    printf("Usted eligió: Flautas de Pollo \n");
                    break;
                default:
                    printf("Opción inválida \n");
                    break;
            }
        
        case 4:
            printf("Eligió la opción de Bebidas. Elija qué va a consumir: \n\n");

            printf("Opción 1: Jarra de Agua simple \n");
            printf("Opción 2: Jarra de Agua de horchata \n");
            printf("Opción 3: Jarra de Agua de jamaica \n");
            scanf("%d",&option2);
            switch (option2){

                case 1:
                    printf("Usted eligió: Jarra de Agua simple \n");
                    break;
                case 2:
                    printf("Usted eligió: Jarra de Agua de horchata \n");
                    break;
                case 3:
                    printf("Usted eligió: Jarra de Agua de jamaica \n");
                    break;
                default:
                    printf("Opción inválida \n");
                    break;
            }

        case 5:
            printf("Eligió la opción de Postres. Elija qué va a consumir: \n\n");
        
            printf("Opción 1: Gelatina \n");
            printf("Opción 2: Duraznos en almibar \n");
            printf("Opción 3: Plátanos con crema \n");
            scanf("%d",&option2);
            switch (option2){

                case 1:
                    printf("Usted eligió: Gelatina \n");
                    break;
                case 2:
                    printf("Usted eligió: Duraznos en almibar \n");
                    break;
                case 3:
                    printf("Usted eligió: Plátanos con crema \n");
                    break;
                default:
                    printf("Opción inválida \n");
                    break;
            }
        
        default:
            printf("Opción no válida.");
            break;
   
    }
    return 0;
}
