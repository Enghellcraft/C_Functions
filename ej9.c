#include<stdio.h>

int multiplo (int, int);

int main (void){

int n1, n2, mul;

printf ("Ingrese un numero para seber si es multiplo de otro:\n");
fflush (stdin);
scanf ("%d", &n1);


printf ("Ingrese un numero posible divisor del anterior:\n");
fflush (stdin);
scanf ("%d", &n2);


mul = multiplo (n1,n2);

if (mul==1){
    printf ("es multiplo");
}else{printf ("no es multiplo");}

return 0;
}

int multiplo (int n1, int n2){

int mul;

if (n1%n2==0){
    mul = 1;
}else{ mul =0;}

return (mul);
}
