#include <stdio.h>
int main()
{
    int first_number = 1, second_number = 1, third_number, number_digits,num_arr[1000];
    printf("Enter the number of digits you want in the series :");
    scanf("%d", &number_digits);
        printf("%d,%d,", first_number, second_number);
    for (int i = 2; i < number_digits; i++)
    {
        third_number = first_number + second_number;
        first_number = second_number;
        second_number = third_number;
        num_arr[i]=third_number;
        printf("%d,", third_number);
    }
    printf("\n%dth digit of series is : %d ",number_digits,num_arr[number_digits-1]);
    return 0;
}