#include<stdio.h>
int main(){
    int a;
   char operator[100];
   int variable[100];
    int b,c,d,f=1,n=0;
for (int i = 0; n==0 ; i++)
{
   

   printf("\nSelect the operation you want to perform.\n1 -- Addition.\n2 -- Substraction.\n3 -- Multiplication.\n4 -- Division.\n5 -- Remainder.\n6 -- Power\n7 -- Exit.\nEnter the value now : ");
    scanf("%d",&operator[i]);
    switch (operator[i])
    {
    case 1:
        printf("Enter the first number : ");
        scanf("%d",&b);
        printf("Enter the second number :");
        scanf("%d",&c);
    printf("The sum of the given number is %d.\n",b+c);
    break;
        case 2:
    
        printf("Enter the first number : ");
        scanf("%d",&b);
        printf("Enter the second number :");
        scanf("%d",&c);
    printf("The minus of the given number is %d.\n",b-c);
    break;

        case 3:

        printf("Enter the first number : ");
        scanf("%d",&b);
        printf("Enter the second number :");
        scanf("%d",&c);
        printf("The product of the two number is :%d.\n",b*c);
        break;

        case 4:

        printf("Enter the first number : ");
        scanf("%d",&b);
        printf("Enter the second number :");
        scanf("%d",&c);
    printf("The divide of the given number is %d.\n",b/c);
        break;

        case 5:

        printf("Enter the first number : ");
        scanf("%d",&b);
        printf("Enter the second number :");
        scanf("%d",&c);
    printf("The remainder  is %d.\n",b%c);
    break;
        
        case 6:
        printf("Enter the number of which power is needed: ");
        scanf("%d",&b);
        printf("Enter the required power of the above number:");
        scanf("%d",&d);
        for (int j = 0; j < d; j++)
        {
            f=f*b;
        }
        
    printf("The power of the given number is %d.\n",f);
    break;
        case 7:
        n==1;
        printf("I wish it was helpfull.\nCoded by 'Sahil sharma'.\n");
        break;

    default:
    printf("Invalid Entry operation not possible. ");
    }
} 

    return 0;
}