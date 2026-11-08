#include<stdio.h>

int A[100] , m , i = 0 , j;


void main()
{
     void In_Sort();
     clrscr();
     printf("\n Enter No of Elements In Array : ");
     scanf("%d" , &m);
     printf("\n Array Data\n");
     for(i = 0 ; i < m ; i++)
     {
           scanf("%d" , &A[i]);      
     }
     printf("\n Inputted Array Is:\n");
     for(i = 0 ; i < m ; i++)
     {
           printf("%4d" , A[i]);      
     }
     for(i = 0 ; i < m-1 ; i++)
     {
           if(A[i]>A[i+1])
                break;      
     }
     if(i == m-1)
     {
          printf("\n Inputted Array Is Already In Sorted Manner.");
          getch();
          return;     
     }
     In_Sort();
     printf("\n Sorted Array Is: \n");
     for(i = 0 ; i < m ; i++)
     {
           printf("%4d" , A[i]);      
     }
     getch();
     return;
     
}

void In_Sort()
{
     int key;
     for(i = 0 ; i < m ; i++)
     {
             key = A[i + 1];
             for(j = i+1 ; j > 0 && key < A[j - 1] ; j--)
             {
                   A[j] = A[j - 1];      
             }    
             A[j] = key;
     }     
     return;
}
