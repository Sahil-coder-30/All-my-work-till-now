#include <stdio.h>
int main()
{
    int arr_1[50], arr_2[50], j = 0, i = 0;
    while (i < 2)
    {
        printf("Enter the element corresponding to %d,%d  :", i + 1, j + 1);
        scanf("%d", &arr_1[i]);
        i++;
        while (j <= i)
        {
            printf("Enter the element corresponding to %d,%d  :", i + 1, j + 1);
            scanf("%d", &arr_1[j]);
            j++;
            
            // printf("%d  %d \n",arr_1[i],arr_2[j]);
        }
    }
    i == 0;
    j == 0;
    while (i < 2)
    {
        printf("%d,", arr_1[i]);
        while (j < i)
        {
            printf("%d,\n", arr_1[j]);
        }
        i++;
    }

    return 0;
}
