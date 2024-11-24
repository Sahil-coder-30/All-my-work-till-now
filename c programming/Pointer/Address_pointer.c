#include<stdio.h>

int main(){
    int a=78;
    int* f= &a; //f is a pointer which is storing the value of a

    printf("The address of a is: %p\n",&a);
    printf("The address of a is: %u\n",&a);  //It gives complete integer value 
    printf("The address of a is: %p\n",f);
    printf("The value at address a is: %d\n",*f);
    return 0;
}