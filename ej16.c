#include<stdio.h>

void maxmin ( int *max, int *min);

int main (void){

int x1, x2, i, *max, *min;

printf ("Ingrese un numero;\n");
scanf ("%d", &x1);
fflush (stdin);

printf ("Ingrese un numero;\n");
scanf ("%d", &x2);
fflush (stdin);
max=&x1;
min=&x2;

maxmin  (  max,  min );

printf ("El maximo es %d, el minimo es %d", *max, *min);

}

void maxmin ( int *max, int *min){

int temp;
printf("max %d    min %d \n",*max,*min);
if ( (*min) > (*max)){
        temp = *max;
        printf("max %d    temp %d  min %d \n",*max,temp, *min);
        *max = *min ;
         printf("max %d    temp %d  min %d \n",*max,temp, *min);
        *min = temp;
         printf("max %d    temp %d  min %d \n",*max,temp, *min);
    }
}


