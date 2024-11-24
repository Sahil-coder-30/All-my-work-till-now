#include <stdio.h>
#include <math.h>
void main(){
    int a=1, b, d,i, cube = 0;
    while(a!=101)
    {
    for (i = 1; b !=0 ; i++)
   {
    a=i;
       b= a % 10 ;
        a = a / 10;
       d = (b * b* b);
     cube = cube + d;
   }
    a=i;
   if (a==cube)
    printf("the armstrong number are : %d \n",cube);
   }
 
}
