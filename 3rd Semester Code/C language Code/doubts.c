#include <stdio.h>
struct ArrivalTime{
        int hours;
        int minutes;
        int seconds;
        char AM_PM[3];
    };
struct TrainDetails{
    char name[100];
    struct ArrivalTime time;
};
int main(){
    struct TrainDetails trains[5];
    int i;
    printf("Enter train details:\n");
    for (i=0; i<2; i++){
        printf("For train %d:\n", i+1);
        printf("Enter train name: ");
        getchar();
        gets(trains[i].name);
        printf("Enter arrival time of train:\n");
        printf("Enter hours: ");
        scanf("%d", &trains[i].time.hours);
        printf("Enter minutes: ");
        scanf("%d", &trains[i].time.minutes);
        printf("Enter seconds: ");
        scanf("%d", &trains[i].time.seconds);
        printf("AM / PM: ");
        getchar();
        gets(trains[i].time.AM_PM);
        printf("\n");
    }







    for(int i = 0;i<5;i++){
        int b = trains[i].time.AM_PM == "PM";
        printf("%d\n",b);
    }













    printf("Train details:\n");
    for (i=0; i<5; i++){
        printf("Train %d: ", i+1);
        printf("Name: %s\n", trains[i].name);

        if (trains[i].time.AM_PM[0] == 'P')
            if (trains[i].time.hours != 12)
                trains[i].time.hours += 12;
        
        else{
            if (trains[i].time.hours == 12)
                trains[i].time.hours = 0;
        }
        printf("Arrival Time: %d:%d:%d\n", trains[i].time.hours, trains[i].time.minutes, trains[i].time.seconds);
    }
    return 0;
}