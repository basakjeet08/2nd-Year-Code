#include <stdio.h>
struct Timer{
    int hour;
    int min;
};
struct Railway{
    char name[20];
    char time[10];
    struct Timer timer;
};
int main(){
    struct Railway train[5];

    for(int i = 0;i<5;i++){
        printf("Enter the Details of Train %d\n",i+1);
        printf("Name : ");
        gets(train[i].name);
        printf("Time in (hh:mm AM) format : ");
        gets(train[i].time);
        printf("\n");
    }
    for(int i = 0;i<5;i++){
        if(train[i].time[6] =='A'){
            train[i].timer.hour = ((train[i].time[0]-'0')*10)+(train[i].time[1]-'0');
            train[i].timer.min = ((train[i].time[3]-'0')*10)+(train[i].time[4]-'0');
        }
        else if((train[i].time[6] =='P') && (train[i].time[0] == '1') && (train[i].time[1] == '2')){
            train[i].timer.hour = ((train[i].time[0]-'0')*10)+(train[i].time[1]-'0');
            train[i].timer.min = ((train[i].time[3]-'0')*10)+(train[i].time[4]-'0');
        }
        else{
            train[i].timer.hour = ((train[i].time[0]-'0')*10)+(train[i].time[1]-'0') +12;
            train[i].timer.min = ((train[i].time[3]-'0')*10)+(train[i].time[4]-'0');
        }
            

    }
    printf("\nThe Details of the Trains :---\n");
    for(int i = 0;i<5;i++){
        printf("Name : %s --- Time : %d:%d\n",train[i].name,train[i].timer.hour,train[i].timer.min);

    }
    return 0;
}