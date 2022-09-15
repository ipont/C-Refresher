#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4
#define LAYERS 5

int main()
{
    int matrix[ROWS][COLS] = {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
    };

    int tensor[LAYERS][ROWS][COLS] = {
        {{111, 112, 113, 114},
         {121, 122, 123, 124}},
        {{211, 212, 213, 214},
         {221, 222, 223, 224}},
    };

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%2d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("---\n");

    for (int l = 0; l < LAYERS; l++)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                printf("%3d ", tensor[l][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
