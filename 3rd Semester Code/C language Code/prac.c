#include <stdio.h>

void menuOfTheProgram();
int main(){
    menuOfTheProgram();
}





void menuOfTheProgram()
{
    int choice_by_user;
    do{

        printf("\n\n\n----------------------------Menu------------------------------\n");
        printf("1. Show the Total marks and the percentage of the Student along with other details :-\n");
        printf("2. Find Details of a particular Student By entering Roll No.:-\n");
        printf("3. Display the Names of Student who are in your entered Percentage Range:-\n");
        printf("4. Sort the Array in Assending Order and Display it :-\n");
        printf("5. Exit the Program:-\n");
        scanf("%d", &choice_by_user);

        switch (choice_by_user)
        {
        case 1:
        printf("1\n");
        break;
        case 2:
        printf("2\n");
        break;
        case 3:
        printf("3\n");
        break;
        case 4:
        printf("4\n");
        break;
        case 5 :
        break;
        default:
        printf("Not a Valid Choice :-\n");
        }
    }while(choice_by_user!=5);
}
