#include<stdio.h>
int main(){
    int table_of,equal_to;
    printf("Enter the number.");
    scanf("%d",&table_of);
    for (int  i = 1; i<=10 ; i++)
    {
        equal_to=table_of*i;
        printf("%d X %d = %d\n",table_of,i,equal_to);
    }
    
    return 0;

}