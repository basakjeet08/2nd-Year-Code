#include <stdio.h>
#include <stdlib.h>
void input(int *,int);
void main()
{
    int n_800;
    printf ("enter the no. of elements in an array :");
    scanf ("%d", &n_800);
    int *a_800;
    a_800=(int*)malloc(n_800*sizeof(int));
    input (a_800 ,n_800);
}
void input(int *a_800 , int n_800)
{
    printf ("no. of elements in an array :");
    for(int i_800=0;i_800<n_800;i_800++)
        scanf ("%d",(a_800)+i_800);
}
void display(int *a_800 , int n_800)
{
    printf ("the array is :\n");
    for(int  i_800=0;i_800<n_800;i_800++)
    printf ("%3d", *(a_800+i_800));
}
void search(int *a_800 , int n_800)
{
    int s_800, u_800=0;
printf("enter the no.that you want to search :");
scanf ("%d",&s_800);
for( int i_800=0;i_800<n_800;i_800++)
{
  if(s_800== *(a_800+i_800))
  {
    printf("the no. found at %d",(i_800+1));
    u_800++; 
  }
}
if (u_800==0)
printf("\n no. not found");
}