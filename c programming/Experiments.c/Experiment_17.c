#include <stdio.h>
int main()
{
    int a, r, f, g, h, k, sum;
    k=0;
       do
        {

            printf("Enter the the three digit number of which the sum of digits is needed :\n");
            scanf("%d", &a);
            r = (a % 10); // Gives us the third digit f the code.
            f = (a / 10);
            g = (f % 10); // Gives ud the second digit of the code.
            h = (f / 10); // Gives us the first digit of the code.
            sum = (h + g + r);
            printf("The sum of the digits of the given number is :%d\n", sum);
            printf("Enter 1 to check another number 0 to off the program : ");
            scanf("%d", &k);
        }
        while (k==1);
        return 0;

            
                
        
            
        

}
