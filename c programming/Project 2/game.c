#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
  //srand(time(0));
  int Player, computer = (rand() % 3 + 0), k = 0;
  do
  {
    /*
    0 --> Snake
    1 --> Water
    2 -->Gun
    */
    printf("Choose \n 0 for Snake.\n 1 for Water. \n 2 for Gun. \n Enter the value here :  ");
    scanf("%d", &Player);
    {
      if (computer == 0)
      {
        printf("Computer has choosen 'Snake'.\n");
      }
      else if (computer == 1)
      {
        printf("Computer has choosen 'Water'.\n");
      }
      else
      {
        printf("Computer has choosen 'Gun'.\n");
      }
    }
    if (Player == 0 && computer == 0 || Player == 1 && computer == 1 || Player == 2 && computer == 2)
    {
      printf("There is a Tie :\n");
    }
    else if (Player == 0 && computer == 1 || Player == 1 && computer == 2 || Player == 2 && computer == 0)
    {
      printf(" Congrats you won the game  :\n");
    }
    else
    {
      printf("You lost  better luck next time  :\n");
    }
    printf("Enter 1 to play again 0 to end game. : ");
    scanf("%d", &k);

  } while (k == 1);
  return 0;
}