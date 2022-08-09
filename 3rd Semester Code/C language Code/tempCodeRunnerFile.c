#include <stdio.h>
// int main(){
//     int nos;
//     printf("Enter the Number Of Elements : ");
//     scanf("%d",&nos);
//     int arr[nos];
//     printf("Enter the Array Elements : ");
//     for(int i = 0;i<nos;i++)
//         scanf("%d",&arr[i]);
//     int max,min,smax,smin;
//     max = min = arr[0];
//     for(int i = 0;i<nos;i++){
//         if(max <= arr[i]){
//             smax = max;
//             max = arr[i];
//         }
//         if(min >= arr[i]){
//             smin = min;
//             min = arr[i];
//         }
//     }
//     for(int i = 0;i<nos;i++){
//         if((arr[i] == max) || (arr[i] == min))
//             continue;
//         if(smax < arr[i])
//             smax = arr[i];
//         if(smin > arr[i])
//             smin = arr[i];
//     }
//     printf("The Second Maximum : %d\n",smax);
//     printf("The Second Minimum : %d\n",smin);
//     return 0;
// }
