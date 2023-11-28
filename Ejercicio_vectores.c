#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(int arg,int a, char const argv[])
{
    srand(time(NULL));
    int vector1[20];
    printf("\nSus 20 numeros son: ");
for(int i = 0; i < 20; i++)
{
    vector1[i]=rand()%10 +1;
}
    printf("\n");
for(int i = 0; i < 20; i++)
{
    printf("%d \n", vector1[i]);
}
    printf("\nIngrese uno de los numeros genrados: ");
    scanf("%d", &a);
    int contador = 0;
for(int i = 0; i<20; i++)
{
    if (vector1[i] == a){
    contador++;
    }
}
printf("el numero se repite: %d", contador);
return 0;
}