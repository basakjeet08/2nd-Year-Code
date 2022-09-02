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
struct Node* insert_first(struct Node* );
void insert_last(struct Node* );
void insert_pos(struct Node*);
struct Node* delete_first(struct Node*);
void delete_last(struct Node*);
void delete_pos(struct Node*);

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
        printf("4. Insert an Element \n");
        printf("5. Delete an Element \n");
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
                printf("1. Insert at first \n");
                printf("2. Insert at Last \n");
                printf("3. Insert at position \n");
                printf("Enter your Choice : ");
                int flag1 ;
                scanf("%d",&flag1);
                if(flag1 == 1)
                    head = insert_first(head);
                else if(flag1 == 2)
                    insert_last(head);
                else if(flag1 == 3)
                    insert_pos(head);
                else
                    printf("Wrong Choice !!\n");
                break;
            case 5 :
                printf("1. Delete at first \n");
                printf("2. Delete at Last \n");
                printf("3. Delete at position \n");
                printf("Enter your Choice : ");
                int flag2 ;
                scanf("%d",&flag2);
                if(flag2 == 1)
                    head = delete_first(head);
                else if(flag2 == 2)
                    delete_last(head);
                else if(flag2 == 3)
                    delete_pos(head);
                else
                    printf("Wrong Choice !!\n");
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
struct Node* insert_first(struct Node* head){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = head;
    return new;
}
void insert_last(struct Node* head){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = NULL;
    struct Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new;
}
void insert_pos(struct Node* head){
    int pos;
    printf("Enter the Position : ");
    scanf("%d",&pos);
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    struct Node* ptr = head ;
    --pos;
    while(ptr != NULL && --pos){
        ptr = ptr->next;
    }
    new->next = ptr->next;
    ptr->next = new;
}
struct Node* delete_first(struct Node* head){
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
void delete_last(struct Node* head){
    struct Node* temp,*ptr;
    ptr = head;
    while((ptr->next)->next != NULL){
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = NULL;
    free(temp);
}
void delete_pos(struct Node* head){
    int pos;
    printf("Enter the Position : ");
    scanf("%d",&pos);
    struct Node* temp , *ptr;
    ptr = head;
    --pos;
    while(ptr != NULL && --pos){
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = (ptr->next)->next;
    free(temp);
}