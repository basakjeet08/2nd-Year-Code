#include <stdio.h>
int main(){
    int row ,column ;
    printf("Enter the rows and Column of the Matrix : ");
    scanf("%d %d",&row , &column);
    int arr[row][column];
    printf("Enter the Matrix Elements : \n");
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++){
            printf("Row %d Column %d : " , i+1 , j+1);
            scanf("%d",&arr[i][j]);
        }
    int sum = 0;
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            if(i==j)
                sum+= arr[i][j];

    printf("The Sum of the Diagonal Elements : %d",sum);
}