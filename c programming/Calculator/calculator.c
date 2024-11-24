#include <stdio.h>

int main()
{
    int a,b;
    char operator;
    printf("Enter the operation you want to perform (+,-,/,*):");
    scanf("%c", &operator);
    printf("Enter the value of 'a' and 'b' :");
    scanf("%d %d",&a,&b);
    int c=0;
    while(1==1)
    {   
        if(c!=0){
            
        printf("Enter new operator:\n");
        scanf(" %c",&operator);
        printf("Enter the next value:\n");
        scanf("%d",&b);
    }
    c++;
       switch (operator)
    {
    case '+':
        printf("%d \n",a+b);
        a=a+b;
        break;
    case '-':
        printf("%d \n",a-b);
        a=a-b;
        break;
    case '*':
        printf("%d \n",a*b);
        a=a*b;
        break;
    case '/':
        printf("%d \n",a/b);
        a=a/b;
        break;
    } 
    int k=0;
    printf("Enter 1 to continue and 0 to end :");
    scanf("%d",&k);
    if(k==0)
    return 0;
    else
    continue;
    }
    return 0;
}
