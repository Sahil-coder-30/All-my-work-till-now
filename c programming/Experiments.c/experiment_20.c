#include <stdio.h>
#include <math.h>

int Binary(int);
int Binary(int binary)
{
    int a = 0, b = 0, remainder=0, i = 0;
    while ( binary != 0){
        remainder = binary % 10;
    binary = binary / 10;
    b = b * 10 + remainder * pow(2, i);
    i++;
    }
    printf("The decimal is %d",b);
    return b;
}
int main()
{
    int c;
    printf("Enter the binary  number.");
    scanf("%d",&c);
    Binary(c);
    return 0;
}