#include<stdio.h>
#include<string.h>
void main(){
    int count=0 ;
    char str[50];
    printf("Enter the string :");
    scanf("%s",&str);
    for (int  i = 0; str[i]!='\0'; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i] == 'o' || str[i] =='u' )
        {
             count++;
             }
        
    }
    printf("The number of %d :",count);
    
}