#include<stdio.h>

int main(){
    int a,i;
    printf("Enter the number you want to repeat :");
    scanf("%d",&a);
    while (i=a)
    {
        i=a;
        printf("The repeating number is :%d\n",i);
    }
    
    return 0;
}