// Construir un programa en lenguaje C donde el usuario ingrese las dimensiones de un arreglo bidimensional (matriz),
// el programa llene la matriz con números aleatorios entre 0 y 100. Luego, calcule la matriz transpuesta.
// El programa debe imprimir la matriz original y la matriz transpuesta.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    // ingreso y reconocimiento de variables y generacion del codigo
    int n, m;
    // Escaneamos la dimension de la matriz que ingrese el usuario
    printf("Ingrese el valor para filas: ");
    scanf("%d", &n);
    printf("Ingrese el valor para columnas: ");
    scanf("%d", &m);
    srand(time(NULL));
    // Agregamos la matriz con los numeros aliatorios
    int matrix1[n][m];
    printf("Matriz Original: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            matrix1[i][j] = rand() % 101;
            ;
            printf("%d\t", matrix1[i][j]);
            // Colocamos la segunada matriz que sera la tanspuesta
            // Imprimimos la matriz resultante
        }
    }
    int matrix2[m][n];
    printf("\n");
    printf("\nMatriz \n \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix2[i][j] = matrix1[j][i];
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}