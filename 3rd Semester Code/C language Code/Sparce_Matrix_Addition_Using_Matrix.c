#include <stdio.h>
void formTriplet(int*,int*, int);
int nonZeroElements(int* , int);
void addSparceMatrix(int* , int* , int , int);
void showData(int* , int);
int main(){
    int size;
    printf("Enter the Size of the Array : ");
    scanf("%d",&size);
    int matrix1[size][size];
    int matrix2[size][size];
    printf("Enter the Value of first Matrix : \n");
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++){
            printf("Element [%d][%d] : " , i , j);
            scanf("%d",&matrix1[i][j]);
        }
    printf("Enter the Value of Second Matrix : \n");
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++){
            printf("Element [%d][%d] : " , i, j);
            scanf("%d",&matrix2[i][j]);
        }
    formTriplet(matrix1[0] ,matrix2[0] , size);
}
void formTriplet(int* matrix1 , int* matrix2, int size){
    int non_0_ele_1 = nonZeroElements(matrix1 , size);
    int non_0_ele_2 = nonZeroElements(matrix2 , size);
    int triplet1[non_0_ele_1][3];
    int triplet2[non_0_ele_2][3];
    int flag = 0; 
    for(int i=0;i<size;i++)
        for(int j = 0;j<size ;j++){
            if(*matrix1 != 0){
                triplet1[flag][0] = i ;
                triplet1[flag][1] = j ;
                triplet1[flag][2] = *matrix1 ;
                flag++;
            }
            matrix1++;
        }
    flag = 0;
    for(int i=0;i<size;i++)
        for(int j = 0;j<size ;j++){
            if(*matrix2 != 0){
                triplet2[flag][0] = i ;
                triplet2[flag][1] = j ;
                triplet2[flag][2] = *matrix2 ;
                flag++;
            }
            matrix2++;
        }
    addSparceMatrix(triplet1[0] , triplet2[0] , non_0_ele_1 , non_0_ele_2);
}
int nonZeroElements(int *matrix , int nos){
    int count = 0;
    for(int i = 0;i<nos*nos;i++){
        if((*matrix) != 0)
            count++;
        matrix++;
    }
    return count;
}
int* adder(int* ptr , int* mat , int val){
    *ptr = *mat ;
    *(ptr+1) = *(mat+1);
    *(ptr+2) = val;
    return (mat+3);
}
void addSparceMatrix(int* triplet1 , int* triplet2 , int t1_size , int t2_size){
    int triplet3[t1_size+t2_size][3];
    int* ptr = triplet3[0];
    int flag = -1 ;
    while(t1_size != 0 && t2_size != 0){
        flag++;
        if(*triplet1 < *triplet2){
            triplet1 = adder(ptr , triplet1 , *(triplet1+2));
            t1_size--;            
        }
        else if(*triplet1 > *triplet2){
            triplet2 = adder(ptr , triplet2 , *(triplet2+2));
            t2_size--;
        }
        else{
            if(*(triplet1+1) > *(triplet2+1)){
                triplet2 = adder(ptr , triplet2 , *(triplet2+2));
                t2_size--;                
            }
            else if(*(triplet1+1) < *(triplet2+1)){
                triplet1 = adder(ptr , triplet1 , *(triplet1+2));
                t1_size--;                
            }
            else{
                triplet1 = adder(ptr , triplet1 , (*(triplet1+2) + *(triplet2+2)));
                t1_size--;
                t2_size--;
                triplet2+=3;
            }
        }
        ptr+= 3;
    }
    int size = (t1_size != 0)? t1_size : t2_size;
    int *leftover = (t1_size != 0)? triplet1 : triplet2;
    flag= flag + size;
    for(int i=0;i<size;i++){ 
        leftover = adder(ptr , leftover , *(leftover+2));
        ptr+=3;
    }
    showData(triplet3[0] , flag);
}
void showData(int* matrix , int size){
    for(int i=0;i<=size;i++){
        for(int j=0;j<3;j++){
            printf("%d " , *matrix);
            matrix++;
        }
        printf("\n");
    }
}