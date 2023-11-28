#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int n,int m)
{
    srand(time(NULL));
    int vector[10];
    printf("Sus primeros 10 numero son:");
    for (int i = 0; i < 10; i++)
    {
        vector[i] = rand() % 10 + 1;

        printf("%d\n", vector[i]);
    }
    printf("\n");
    printf("Ingrese el numero de filas:");
    scanf("%d",n);
    printf("Ingrese el numero de filas:");
    scanf("%d",m);
    int matrix[n][m];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            printf("%d \t", matrix [i][j]);
        }
                    printf("\n");
    }

    return 0;
}
