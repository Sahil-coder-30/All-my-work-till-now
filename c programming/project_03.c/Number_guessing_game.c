#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int a, k, s,no_of_guess=0;
    srand(time(0));
    do
    {
        printf("Welcome to the world of Guessing numbers. \n  Let's start.\n \n");

        a = (rand() % 100 + 1);
            printf("Guess any number between 0 to 100 : ");
        scanf("%d", &k);
        while (k != a)
        {
            no_of_guess++;
        if (k < a)
            printf("Guess the bigger number : \n ");
        else if (k > a)
        {
            printf("Guess the smaller number :\n");
        }
        printf("Guess again :");
        scanf("%d",&k);
        }
        while (k==a)
        {
            printf("\n Number of attempts = %d \n You won congrats : \n",no_of_guess);
            break;
        }
        
        
        printf("Enter 1 to play again 0 to terminate :");
        scanf("%d", &s);
if(s==0)
printf("\nBey,Bey.\nThanks for Gaming.\nDeveloped by: Sahil sharma. ");

    } while (s == 1);

    return 0;
}
