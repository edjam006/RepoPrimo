#include <stdio.h>

int main (){
    int num, i, prim = 1;
    printf("Ingrese un numero entero\n");
    scanf("%d", &num);
    if (num <= 1) {
        prim = 0;
    } else {
       
        for (i = 2; i < num; i++) {
            
            if (num % i == 0) {
                prim = 0;
                
            }
        }
    }

    if (prim == 1){
        printf("El numero es primo\n");
    } else {
        printf("El numero no es primo\n");
    }

}
