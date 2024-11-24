#include<stdio.h>
int main(){
    int n,a=1;
    printf("Enter the you want to check : ");
    scanf("%d",&n);
    for (int i = 2; a !=0 && i<n; i++)
    {
        a=n%i;    
    }
 
    if(a == 0) 
    {
       printf("It is not a prime number :");

    }
    else
    printf("It is a prime number ");
    
    return 0;

}