#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the value of a\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of 'a' is %d and the value of 'b' is %d ",a,b);
    

    return 0;

}
