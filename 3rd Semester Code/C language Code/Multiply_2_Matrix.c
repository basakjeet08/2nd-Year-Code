#include <stdio.h>
int main(){
    void input(int arr[][10], int, int);   
    int arr1[10][10];
    int arr2[10][10];
    int res[10][10] = {0};
    int m, n, k, i, j, l;
    printf("Enter number of rows and columns of 1st array: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of 1st array:\n");
    input(arr1, m, n);
    printf("\nEnter number of columns of second array: ");
    scanf("%d", &k);
    printf("Enter elements of 2nd array:\n");
    input(arr2, n, k);

    for (i=0; i<m; i++)
        for (j=0; j<k; j++)
            for (l=0; l<n; l++)
                res[i][j] += arr1[i][l] * arr2[l][j];

    printf("\nResultant array:\n");
    for (i=0; i<m; i++){
        for (j=0; j<k; j++)
            printf("%d ", res[i][j]);
            
        printf("\n");
    }
    return 0;
}
void input(int arr[][10], int rows, int columns){
    int i, j;
    for (i=0; i<rows; i++){
        printf("Row %d (Enter %d elements):\n", i+1, columns);
        for (j=0; j<columns; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}