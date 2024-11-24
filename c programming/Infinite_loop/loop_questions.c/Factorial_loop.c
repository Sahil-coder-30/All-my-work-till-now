#include<stdio.h>

int main(){
    int n,a;
    a=1;
    printf("Enter the of which factorial is needed :");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        a=a*i;
    }
    printf("Factorial of the given number is:%d",a);
    return 0;
}
