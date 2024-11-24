#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the you want to check : \n");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        a=n%i;
    while (a==0)
    {
        printf("It is not a prime number ");
    }
    }

    return 0;

}