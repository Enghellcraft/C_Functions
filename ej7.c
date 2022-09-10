#include<stdio.h>

void piramide (int);

int main (void){

int niveles;

printf ("Ingrese la cantidad de niveles:\n");
fflush (stdin);
scanf ("%d", &niveles);

piramine(niveles);

return 0;
}

void piramine (int niveles){

int i, j;

for (j=0; j<niveles; j++){
    for (i=0; i<niveles-j;i++){
        printf (" ");}
    for (i=1;i<=j+1; i++){
        printf ("%d", i);}
    for (i=j;i>0;i--){
        printf ("%d", i);}
    printf ("\n");

    }


}


