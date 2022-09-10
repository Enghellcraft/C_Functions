#include<stdio.h>

int sumacupo (int red, int prg);
int sumamu (int mred, int mprg);
int sumaho (int hred, int hprg);
int sumatot (int cantm, int canth);

int main (void){

int hred, hprg, mred, mprg, red, prg, cantm, canth, total, totcu;

printf ("ingrese cupo en RED: \n");
scanf ("%d", &red);
fflush (stdin);

printf ("ingrese cupo en PRG: \n");
scanf ("%d", &prg);
fflush (stdin);

totcu = sumacupo (red, prg);

printf ("ingrese cant de mujeres en RED: \n");
scanf ("%d", &mred);
fflush (stdin);

printf ("ingrese cant de mujeres en PRG: \n");
scanf ("%d", &mprg);
fflush (stdin);

cantm = sumamu (mred, mprg);

printf ("ingrese cant de hombres en RED: \n");
scanf ("%d", &hred);
fflush (stdin);

printf ("ingrese cant de hombres en PRG: \n");
scanf ("%d", &hred);
fflush (stdin);

canth = sumaho (hred, hprg);

total = sumatot (cantm, canth);

printf ("El total de mujeres es: %d\n", cantm);
printf ("El total de hombres es: %d\n", canth);
printf ("El total de alumnos es: %d\n", total);
printf ("El total de cupo es: %d\n", totcu);
if (total < totcu){
    printf ("HAY LUGAR\n");
    }else if ((red < totcu) || (prg < totcu)){
        printf ("PARCIAL\n");
        }else{
            printf ("SIN LUGAR\n");
            }

}
int sumamu (int mred, int mprg){

int cantm;
cantm = mred + mprg;
return (cantm);

}
int sumaho (int hred, int hprg){

int canth;
canth = hred + hprg;
return (canth);

}
int sumatot (int cantm, int canth){

int total;
total = (cantm + canth);
if (total < 1){
    total = 1;
}
return (total);

}
int sumacupo (int red, int prg){

int totcu;
totcu = red + prg;
return (totcu);

}
