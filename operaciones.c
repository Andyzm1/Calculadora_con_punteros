#include <stdio.h>

int suma( float *num1, float *num2, float *ans){
    *ans = *num1 + *num2;  
    printf("La suma es %f\n", *ans);
    return 0;
}
int resta( float *num1, float *num2, float *ans){
    *ans = *num1 - *num2;
    printf("La resta es %f\n", *ans);
    return 0;
}
int multiplicacion( float *num1, float *num2, float *ans){
    *ans = *num1 * *num2;
    printf("La multiplicacion es %f\n", *ans);
    return 0;
}
int division( float *num1, float *num2, float *ans){
    if (*num2!=0)
    {
        *ans = (*num1) / (*num2);
        printf("La division es %.2f\n", *ans);
    }
    else{
        printf("No se puede dividir para cero\n");
    }
    return 0;
}
int arregloescalar(float *arreglo, int tam, float escalar){
    for (int vec = 0; vec < tam; vec++)
    {
        (arreglo[vec+1])= arreglo[vec] + escalar;
    }
    printf("El nuevo vector con la suma del escalar %f es:\n", escalar);
    for (int vec = 0; vec < tam; vec++)
    {
        printf(" %.2f |", arreglo[vec]);
    }
 return 0;
}
int compararcadenas(char *cad1, char *cad2, int cl1, int cl2){
    int med=1, pos=0;
    if (cl1 != cl2)
    {
      printf("\nLas cadenas de caracteres no son iguales\n");         
    } else{
        while (*cad1 != '\0' && *cad2 != '\0' && med != 0)
        {
            if (*cad1 == *cad2)
            {
              cad1++;
              cad2++;
              med=1;  
              
            }
            else{
              med=0;
            } 
        } 
    }
    if (med == 1) {
      printf("Las cadenas son iguales\n");
    }
    else {
      printf("Las cadenas no son iguales\n");
    }
    return 0;
}