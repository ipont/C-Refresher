#include <stdio.h>
#include <stdlib.h>

/**
 *
 * Genertate a random matrix and display it in direct and transposed form
 *
 * Goals:
 *  - make random matrix with num of ros and cols given by user
 *  - check that 1 < rows <= 10, the same for the columns
 *  - generate random matrix with 0 <= numbers < upper limit given by user
 *  - display the matrix in direct and transpose form
 *
 */

int **makeMatrix(int rows, int cols, int max)
{
    int **matrix = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = malloc(cols * sizeof(int *));
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % max;
        }
    }
    return matrix;
}

void printMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%6d", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

void printMatrixTranspose(int **matrix, int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            printf("%6d", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols, max;

    printf("Enter num rows: \n");
    scanf("%d", &rows);
    if (rows > 10 || rows < 1)
    {
        return 1;
    }

    printf("Enter num cols: \n");
    scanf("%d", &cols);
    if (cols > 10 || cols < 1)
    {
        return 1;
    }

    printf("Enter max value: \n");
    scanf("%d", &max);

    int **matrix = makeMatrix(rows, cols, max);
    printMatrix(matrix, rows, cols);

    printf("\nTransposed Matrix: \n");

    printMatrixTranspose(matrix, rows, cols);
    return EXIT_SUCCESS;
}
