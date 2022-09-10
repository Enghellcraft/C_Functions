#include<stdio.h>

void multiplos (int, int);

int main (void){

int m, n;

printf ("ingrese el numero del que quiere multiplos:\n");
fflush (stdin);
scanf ("%d",&m);

printf ("ingrese el numero tope:\n");
fflush (stdin);
scanf ("%d",&n);

multiplos (m, n);

return 0;
}

void multiplos (int m, int n){

int i, j=0, res=0;

printf ("Los multiplos de %d, con tope en %d, son: ", m, n);

for (i=0; res<=n; i++){
    printf ("%d, ", res);
    res = i * m;

}

}
