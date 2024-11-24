#include<stdio.h>
int main(){
    int n,b,c=1,d;
    do
    {printf("Select the operation you want to perform.\n1 -- Addition.\n2 -- Substraction.\n3 -- Multiplication.\n4 -- Division.\n5 -- Remainder.\n6 -- Power\n7 -- Exit.\nEnter the value now : ");
    scanf("%d",&n);
    switch (n)
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
        for (int i = 0; i < d; i++)
        {
            c=c*b;
        }
        
    printf("The power of the given number is %d.\n",c);
    break;
        case 7:
        printf("I wish it was helpfull.\nCoded by 'Sahil sharma'.\n");
        break;

    default:
    printf("Invalid Entry operation not possible. ");
    }
    }while(n!=7);
    return 0;


}