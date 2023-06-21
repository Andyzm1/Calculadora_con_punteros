#include <stdio.h>
#include <string.h>
#include "operaciones.h"

int main(){
float  num1=0, num2=0, ans=0, escalar=0;
int cl1=0, cl2=0;
char cad1[20], cad2[20];

/*Calculadora*/
    printf("Ingrese el primer numero\n");
    scanf("%f", &num1);
    printf("Ingrese el primer numero\n");
    scanf("%f", &num2);
    suma(&num1, &num2, &ans);
    resta(&num1, &num2, &ans);
    multiplicacion(&num1, &num2, &ans);
    division(&num1, &num2, &ans);

/*Arreglo más escalar*/
printf("Ahora haremos la operacion escalar para el arreglo\n");
float arreglo[10];
for(int var = 0 ; var<10 ; var++){
        printf("Ingrese el elemento %d del arreglo: ",var+1);
        scanf("%f",&arreglo[var]);
    }
printf("Que escalar desea sumar al arreglo\n");
scanf("%f", &escalar);
arregloescalar(arreglo, 10, escalar);

/*Comparación cadena de caracteres*/
printf("Ahora haremos la comparacion de dos cadenas de caracteres\n");
printf("Ingrese la primera cadena de caracteres\n");
scanf("%s", cad1);
printf("Ingrese la segunda cadena de caracteres\n");
scanf("%s", cad2);
cl1 = strlen(cad1);
cl2 = strlen(cad2);
compararcadenas(cad1, cad2, cl1, cl2);
    return 0;
}