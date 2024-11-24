#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the order of matrix for rows and column respectively. :");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value of %d X %d element for the given matrix :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}