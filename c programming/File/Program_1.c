#include <stdio.h>
int main()
{
    FILE *ptr;

    ptr = fopen("sahil.txt", "r");
    int num;
    
    num=fprintf(ptr,"%d",num);


    return 0;
}