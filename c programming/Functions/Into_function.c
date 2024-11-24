#include<stdio.h>

int into(int,int);

int into(int x,int y){
    printf("The multiple of is %d\n",x*y);
    return x*y;
}

int main(){
    int a,b;
    printf("Enter the value of a and b :\n");
    scanf("%d %d",&a,&b);

    into(a,b);

    return 0;
}