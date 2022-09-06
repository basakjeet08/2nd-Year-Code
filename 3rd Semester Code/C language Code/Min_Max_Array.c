#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size of the Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elements of Array : ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int max , min;
    max = min = arr[0];
    for(int i=0;i<size;i++){
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    printf("The Maximum & Minimum Element : %d %d",max , min);

}