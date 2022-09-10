#include<stdio.h>

float variacion_porcentual (float pre, float act);

int main (void){

int i=0, cod[2],exit=0;
float pre[2], act[2], varporc[i];

while (i<2){
    printf ("Ingrese el codigo: \n");
    scanf ("%d", &cod[i]);
    fflush (stdin);
    printf ("Ingrese el precio anterior: \n");
    scanf ("%f", &pre[i]);
    fflush (stdin);
    printf ("Ingrese el precio actual: \n");
    scanf ("%f", &act[i]);
    fflush (stdin);

    varporc[i] = variacion_porcentual (pre[i], act[i]);

    printf ("La variacion porcentual del articulo %d, es: %.2f.\n", cod[i], varporc[i]);

    i++;
}

if (varporc[0]>varporc[1]){
    printf ("El articulo %d, es el de mayor indice de variacion porcentual (%.2f).\n", cod[0], varporc[0]);
    }else{
        printf ("El articulo %d, es el de mayor indice de variacion porcentual (%.2f).\n", cod[1], varporc[1]);}

        while(i<2 || exit==0){
    if (cod[i]== 1){
            printf("cod 1\n");
    if ((varporc[i])>5,0){
        printf ("MUCHA INFLACION");
        exit=1;
    }
    printf("%d  %f \n",i,varporc[i]);
    i++;
    if(i>2){
        break;

    }
}
}
}

float variacion_porcentual (float pre, float act){

float varporc;

varporc = (1-(pre/act))*100;

return (varporc);

}
