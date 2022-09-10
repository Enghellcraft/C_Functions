#include<stdio.h>

int primo (int);

int main (void){

int n, k;

printf ("ingrese un numero:\n");
scanf ("%d", &n);


k = primo (n);

if(k>1){
   printf ("no es primo");
    }else {
    printf ("es primo");
    }

}

int primo (int n){

int i=n, k=0;

while (i > 1){
    if (n%i==0){
        k++;
        printf("%d\n",k);
        }
     i--;}


return (k);
}


