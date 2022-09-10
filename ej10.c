#include<stdio.h>

int fibo (int);

int main (void){

int n, res;

printf ("Ingrese el numero de la sucecion que quiera conocer\n");
fflush (stdin);
scanf ("%d", &n);

res = fibo (n);

printf ("El %d numero fibonacci es: %d", n, res);

}

int fibo (int n){

int i=0, res[3];
res[0]=res[1]=res[2]=0;
if(n==0)
    {
        n=1;
}
while(i<=(n-1))
    {
        if(i==1){
            res[1]=res[0];
            res[0]=1;
            i++;
        }else{
        res[2]=res[1];
        res[1]=res[0];
        res[0]=res[1]+res[2];
        i++;
        }
    }



 return (res[0]);
}

