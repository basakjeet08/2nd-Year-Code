#include <stdlib.h>
#include <stdio.h>
struct Node {
    int data ;
    struct Node* next ;
};
void menuOfTheProgram(struct Node* , struct Node* , struct Node*);
struct Node* createNode(struct Node*);
void searchElement(struct Node*);
void displayList(struct Node*);
void insertElement(struct Node*);
struct Node* reverseElements(struct Node*);
int main(){
    int count = 1;
    int flag = 0;
    struct Node* ptr, *New , *head;
    New = (struct Node*)malloc(sizeof(struct Node));
    head = ptr = New;
    printf("Enter the Element of First Node : ");
    scanf("%d",&New->data);
    New->next = NULL ;
    menuOfTheProgram(head,ptr,New);
    return 0 ;
}
void menuOfTheProgram(struct Node* head , struct Node* ptr , struct Node* New){
    int choice = 1;
        while(choice != 0){
        printf("-------------------Menu -----------------\n");
        printf("1. Create another Node \n");
        printf("2. Search for an Element \n");
        printf("3. Display the Linked List \n");
        printf("4. Insert an Element at Pos \n");
        printf("5. Reverse the Linked List \n");
        printf("6. Exit \n");
        scanf("%d",&choice);

        switch(choice){
            case 1 :
                ptr = createNode(ptr);
                break;
            case 2 :
                searchElement(head);
                break;
            case 3 :
                displayList(head);
                break;
            case 4 :
                insertElement(head);
                break;
            case 5 :
                head = reverseElements(head);
                break;
            case 6 :
                choice = 0;
                break;
            default :
                printf("Wrong Choice !!"); 
        }
    }
}
struct Node* createNode(struct Node* ptr){
    struct Node* New = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Value of the Node : ");
    scanf("%d",&New->data);
    New->next = NULL ;
    ptr->next = New;
    return New;   
}
void searchElement(struct Node* head){
    struct Node* ptr = head;
    int search;
    printf("Enter the Element to Be Searched : ");
    scanf("%d",&search);
    while(ptr != NULL){
        if(ptr->data == search){
            printf("Element Found !!\n");
            break;
        }
        ptr = ptr->next;
    }
    if(ptr == NULL)
        printf("Element Not Found !!");
}
void displayList(struct Node* head){
    struct Node* ptr = head;
    printf("The Elements Are : \n");
    while(ptr != NULL){
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }
}
void insertElement(struct Node* ptr){
    int pos;
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Element to Insert : ");
    scanf("%d",&new->data);
    printf("Enter the Position : ");
    scanf("%d",&pos);
    pos--;
    while(--pos){
        ptr = ptr->next;
    }
    new->next = ptr->next;
    ptr->next = new;
}
struct Node* reverseElements(struct Node* head){
    struct Node* ptr = head;
    struct Node* prev = NULL;
    struct Node* temp_head,*new,*temp;
    while(ptr->next != NULL){
        temp = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = temp;
    }
    ptr->next = prev;
    return ptr;
}