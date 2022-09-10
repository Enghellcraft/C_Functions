#include<stdio.h>

float cuadrado (float lado);
float circulo (float radio);
float rectangulo (float base, float altura);
float trapecio (float base1, float base2, float altura);
float triangulo (float base, float altura);

int lee_opcion (int op);

int main (void){

int op;
float  res, lado, radio, base, altura, base1, base2;


printf ("==========================================================\n");
printf ("========CALCULO DE SUPERFICIES (version 1.0)==============\n");
printf ("==========================================================\n");
printf ("1. Cuadrado   (lado*lado)\n");
printf ("2. Círculo    (pi*radio*radio)\n");
printf ("3. Rectángulo (base*altura)\n");
printf ("4. Trapecio   (base1+base2)*altura/2)\n");
printf ("5. Triángulo  (base*altura)/2\n");
printf ("0. Salir del programa\n");
printf ("==========================================================\n");

scanf ("%d", &op);
fflush (stdin);

op = lee_opcion (op);

switch (op){
case 1: printf ("Ingrese el tamano del lado: \n");
        scanf ("%f", &lado);
        fflush (stdin);
        res = cuadrado (lado);
        printf ("Superficie: %.2f\n", res);
        break;
case 2: printf ("Ingrese el tamano del radio: \n");
        scanf ("%f", &radio);
        fflush (stdin);
        res = circulo (lado);
        printf ("Superficie: %.2f\n", res);
        break;
case 3:printf ("Ingrese el tamano de la base: \n");
        scanf ("%f", &base);
        fflush (stdin);
        printf ("Ingrese el tamano de la altura: \n");
        scanf ("%f", &altura);
        fflush (stdin);
        printf ("Superficie: %.2f\n", res);
        break;
case 4:printf ("Ingrese el tamano de la base menor: \n");
        scanf ("%f", &base1);
        fflush (stdin);
        printf ("Ingrese el tamano de la base mayor: \n");
        scanf ("%f", &base2);
        fflush (stdin);
        printf ("Ingrese el tamano de la altura: \n");
        scanf ("%f", &altura);
        fflush (stdin);
        printf ("Superficie: %.2f\n", res);
        break;
case 5:printf ("Ingrese el tamano de la base: \n");
        scanf ("%f", &base);
        fflush (stdin);
        printf ("Ingrese el tamano de la altura: \n");
        scanf ("%f", &altura);
        fflush (stdin);
        printf ("Superficie: %.2f\n", res);
        break;
case 0:printf ("Gracias por usar el software");
        break;
}

}

int lee_opcion (int op){

while (op>5 || op<1)
{
    printf ("Opcion invalida, reingrese el numero: \n");
    printf ("==========================================================\n");
    printf ("========CALCULO DE SUPERFICIES (version 1.0)==============\n");
    printf ("==========================================================\n");
    printf ("1. Cuadrado   (lado*lado)\n");
    printf ("2. Círculo    (pi*radio*radio)\n");
    printf ("3. Rectángulo (base*altura)\n");
    printf ("4. Trapecio   (base1+base2)*altura/2)\n");
    printf ("5. Triángulo  (base*altura)/2\n");
    printf ("0. Salir del programa\n");
    printf ("==========================================================\n");
    scanf ("%d", &op);
    fflush (stdin);
return (op);
}
}
float cuadrado (float lado){
float res;
res = lado * lado;
return (res);
}
float circulo (float radio){
float res;
res = 3,14 * radio * radio;
return (res);
}
float rectangulo (float base, float altura){
float res;
res = base * altura;
return (res);
}
float trapecio (float base1, float base2, float altura){
float res;
res = (base1+base2) * altura;
return (res);
}
float triangulo (float base, float altura){
float res;
res = (base * altura)/2;
return (res);
}
