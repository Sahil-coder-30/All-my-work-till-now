#include<stdio.h>

int main(){
    printf("The value of numbers is:\n");
    int Number[10];
    for (int i = 0; i < 10; i++)
    {
        Number[i]=i;

    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value at %d Number is %d\n",i,Number[i]);

    }
    int*ptr=&Number[0];
    
     printf("The value at Number %u is %u\n",*(ptr+2),ptr+2);

    
    return 0;
}