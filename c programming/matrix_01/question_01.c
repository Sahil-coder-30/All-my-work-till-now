#include<stdio.h>
int main(){
    int arr_1[50],arr_2[50];
    for(int i=0;i<2;i++)
{
         arr_1[i]==i;
        for (int j = 0; j<i; j++)
        {
            arr_2[j]==j;
            printf("%d  %d \n",arr_1[i],arr_2[j]);
        }
        
    }
    return 0;
}