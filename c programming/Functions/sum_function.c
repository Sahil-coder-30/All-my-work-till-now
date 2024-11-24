#include <stdio.h>

int sum(int,int);

int sum(int x,int y)
{
    printf("The sum of given numbers is %d\n", x + y);
    return x +y;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b :\n");
    scanf("%d %d", &a,&b);
    sum(a,b);

    int a1, b1;
    printf("Enter the value of a and b :\n");
    scanf("%d %d", &a1,&b1);
    sum(a1,b1);

    int a2, b2;
    printf("Enter the value of a and b :\n");
    scanf("%d %d", &a2,&b2);
    sum(a2,b2);

    return 0;
}
