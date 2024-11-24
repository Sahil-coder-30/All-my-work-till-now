#include<stdio.h>
#include<string.h>

typedef struct Bankacc{
    int AccountNo;
    char Name[50];
    int ammount;
}bacc;

int main(){
    bacc a;
    printf("Enter the Name of the Account holder: \n");
    scanf("%s",&(a.Name));
    
    printf("Enter the Account number of the Account holder: \n");
    scanf("%d",&(a.AccountNo));

    printf("Enter the ammount present in the Account holders acount: \n");
    scanf("%d",&(a.ammount));

printf("In the account of %s with account number %d the ammount of Rs%d is present :",a.Name,a.AccountNo,a.ammount );

    return 0;

}