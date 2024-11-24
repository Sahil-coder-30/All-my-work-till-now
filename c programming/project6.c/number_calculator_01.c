#include <stdio.h>
#include <math.h>
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    {
        int input_1, input_2;
        do
        {
        int equal_to, square, cube, factorial = 1, i, j, k;
        int remainder, reversed = 0;
        int first_number = 1, second_number = 1, third_number, number_digits, num_arr_1[1000];
        int p, storage, multiplyier, remainder_1, num_arr[100], cube_1 = 0;
        double Root;
        double Number;
        printf("Welcome, you can perform various actions for an number.\n");
        printf(" 1 -- Table. \n 2 -- Square. \n 3 -- cube. \n 4 -- Factorial. \n 5 -- Square Root. \n 6 -- Prime. \n 7 -- Armstrong number. \n 8 -- Reverse. \n 9 -- Fabonnachi series.\n10 -- LCM.\n11 -- Reverse Digits.\n12 -- Exit.\n");
        
        
            printf("\nEnter the number corresponding the operation you want to perform :");
            scanf("%d", &input_1);
            if (input_1 == 12 || input_1 == 5 || input_1 == 9 || input_1 == 10)
            {
                goto jump;
            }
            else
            {
                printf("Enter the number on which you want to perform the selected action. : ");
                scanf("%d", &input_2);
            jump:
                switch (input_1)
                {
                case 1:
                    for (i = 1; i <= 10; i++)
                    {
                        equal_to = input_2 * i;
                        printf("%d X %d = %d\n", input_2, i, equal_to);
                    }
                    break;
                case 2:
                {
                    square = pow(input_2, 2);
                    printf("The square of the given number is : %d\n", square);
                }
                break;
                case 3:
                {
                    cube = pow(input_2, 3);
                    printf("The cube of the entered number is : %d\n", cube);
                    break;
                }
                case 4:
                {
                    for (i = 1; i <= input_2; i++)
                    {
                        factorial = factorial * i;
                    }
                    printf("Factorial of the given number is:%d\n", factorial);
                    break;
                }
                case 5:
                {
                    printf("Enter the value : ");
                    scanf("%lf", &Number);
                    Root = sqrt(Number);
                    printf("The root of this is : %.2f\n", Root);
                    break;
                }
                case 6:
                {

                    for (k = 2; remainder != 0 && k < input_2; k++)
                    {
                        remainder = input_2 % i;
                    }

                    if (remainder == 0)
                    {
                        printf("It is not a prime number :\n");
                    }
                    else
                        printf("It is a prime number.\n ");
                    break;
                }
                case 7:
                {
                    printf("Enter the number you want to check :");
                    scanf("%d", &input_2);

                    int storage = input_2;
                    for (int p = 0; remainder_1 != 0; p++)
                    {
                        remainder_1 = input_2 % 10;
                        num_arr[i] = remainder_1;
                        input_2 = input_2 / 10;
                        multiplyier = (num_arr[i] * num_arr[i] * num_arr[i]);
                        cube_1 = cube_1 + multiplyier;
                    }
                    printf("cube is equal to : %d\n", cube_1);
                    if (storage == cube_1)
                    {
                        printf("It is an armstrong number. \n");
                    }
                    else
                    {
                        printf("It is not a armstrong number.\n");
                    }
                    break;
                }
                case 8:
                {
                    while (input_2 != 0)
                    {
                        int digit = input_2 % 10;
                        reversed = reversed * 10 + digit;
                        input_2 /= 10;
                    }

                    printf("Reversed number: %d\n", reversed);
                    break;
                }
                case 9:
                {
                    printf("Enter the number of digits you want in the series :");
                    scanf("%d", &number_digits);
                    printf("%d,%d,", first_number, second_number);
                    for (int i = 2; i < number_digits; i++)
                    {
                        third_number = first_number + second_number;
                        first_number = second_number;
                        second_number = third_number;
                        num_arr_1[i] = third_number;
                        printf("%d,", third_number);
                    }
                    printf("\n%dth digit of series is : %d\n ", number_digits, num_arr_1[number_digits - 1]);
                    break;
                }
                case 10:
                {
                    int num1, num2;
                    printf("Enter two numbers: ");
                    scanf("%d %d", &num1, &num2);

                    printf("The LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
                
                break;
                }
                case 11:
                {
                    printf("Digits present in the enterd number is:");
                    while (input_2 != 0)
                    {
                        int digit = input_2 % 10;
                        input_2 /= 10;
                        printf("%d,", digit);
                    }

                    break;
                }
                case 12:
                {
                    printf("Thank you,\nDeveloped by Sahil sharma.");
                    break;
                }
                default:
                {
                    printf("Invalid entry.");
                }
                }
            }
        } while (input_1 != 12);
    }
    return 0;
}