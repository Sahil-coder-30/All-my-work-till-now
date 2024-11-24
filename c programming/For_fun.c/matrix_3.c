#include <stdio.h>

int main()
{
    int a1, b1, a2, b2;

    // Input the dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &a1, &b1);

    // Input the dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &a2, &b2);

    // Check if multiplication is possible
    if (b1 != a2)
    {
        printf("Matrix multiplication is not possible. Columns of first matrix must match rows of second matrix.\n");
        return 0;
    }

    // Declare the matrices
    int mat1[a1][b1], mat2[a2][b2], result[a1][b2];

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b1; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < a2; i++)
    {
        for (int j = 0; j < b2; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize the result matrix to zero
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b2; j++)
        {
            for (int k = 0; k < b1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("The result of the matrix multiplication is:\n");
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
