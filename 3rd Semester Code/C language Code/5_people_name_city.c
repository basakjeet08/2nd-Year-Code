#include <stdio.h>
struct People{
    char name[20];
    int age;
    char city[20];
};
int main(){
    struct People p[5] ;
    for(int i = 0;i<5;i++){
        printf("Write Details of Person %d :--\n",i+1);
        printf("Name : ");
        gets(p[i].name);
        printf("Age : ");
        scanf("%d",&p[i].age);
        printf("City : ");
        getchar();
        gets(p[i].city);
        printf("\n\n");

    }
    int max = 0;
    int flag = 0;
    for(int i = 0;i<5;i++){
        if(max < p[i].age){
            max = p[i].age;
            flag = i;
        }
    }
    printf("The Details of the Eldest One :--\n");
    printf("Name : %s\n",p[flag].name);
    printf("Age : %d\n",p[flag].age);
    printf("City : %s\n",p[flag].city);

    return 0;
}