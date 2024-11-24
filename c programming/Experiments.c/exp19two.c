#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,d, cube = 0;
    printf("Enter the number you want to check :");
    scanf("%d",&a);
    
    int c=a;
    for (int i = 0; b !=0 ; i++)
   {
       b= a % 10 ;
      
     cube = cube + (b * b * b);
        a = a / 10;
       
   }
    printf("cube is equal to : %d\n", cube);
   if (c==cube)
   {
    printf("It is an armstrong number. \n");
    }
    else
    {
        printf("It is not a armstrong number.");
    }
    
   

    return 0;
}