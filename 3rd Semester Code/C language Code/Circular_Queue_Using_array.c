#include <stdio.h>
void menuOfTheProgram(int*);
void enqueue(int*);
void dequeue(int*);
void traversal(int*);

int size = 10;
int rear = -1;
int front = -1;
int main(){
    int queue[10];
    menuOfTheProgram(queue);
    return 0;
}
void menuOfTheProgram(int *queue){
    int choice = 0;
    while(choice != 4){
        printf("1. Insert an Element \n");
        printf("2. Delete an Element \n");
        printf("3. Display the Queue \n");
        printf("4. Exit \n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                enqueue(queue);
                break;
            case 2 :
                dequeue(queue);
                break;
            case 3 :
                traversal(queue);
                break;
            case 4 :
                choice = 4;
                break;
        }
    }
}
void enqueue(int* queue){
    if((rear+1)%size == front){
        printf("OverFlow \n");
        return;
    }
    if(front == -1)
        front = rear = 0;
    else
        rear = (rear+1)%size;
    int value;
    printf("Enter the Value : ");
    scanf("%d",&value);
    *(queue+rear) = value;
}
void traversal(int* queue){
    if(front == -1){
        printf("Empty Queue\n");
        return;
    }
    int i = front;
    while(i != rear){
        printf("%d " , *(queue+i));
        i = (i+1)%size;
    }
    printf("%d",*(queue+i));
    printf("\n");
}
void dequeue(int* queue){
    if(front == -1){
        printf("UnderFlow\n");
        return ;
    }
    if(front==rear){
        printf("%d \n",*(queue+front));
        front = rear = -1;
    }
    else{
        printf("%d \n",*(queue+front));
        front++;
    }
}