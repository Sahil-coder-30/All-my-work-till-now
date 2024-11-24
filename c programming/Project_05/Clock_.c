#include<stdio.h>
#include<time.h>
int main(void){
    time_t current_time=time(NULL);
    

    //struct tm *Time =current_time;
    char *times=ctime(&current_time);
    printf("%s",times);

struct tm *gm_time=gmtime(&current_time);

printf(" Current time is %d:%d:%d\n",gm_time ->tm_hour,gm_time ->tm_min,gm_time->tm_sec);

    return 0;
}