// Merge sort in C
#include <stdio.h>
// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r)
{
 
 int n1 = q - p + 1;
 int n2 = r - q , i;
 int L[n1] , M[n2];
 for (i = 0; i < n1; i++)
 L[i] = arr[p + i];
 for (int j = 0; j < n2; j++)
 M[j] = arr[q + 1 + j];
 
 int i, j, k;
 i = 0;
 j = 0;
 k = p;
 // Until we reach either end of either L or M, pick larger among
 // elements L and M and place them in the correct position at A[p..r]
 while (i < n1 && j < n2)
{
 if (L[i] <= M[j])
{
 arr[k] = L[i];
 i++;
 } else {
 arr[k] = M[j];
 j++;
 }
 k++;
 }
 // When we run out of elements in either L or M,
 // pick up the remaining elements and put in A[p..r]
 while (i < n1)
 {
 arr[k] = L[i];
 i++;
 k++;
 }
 while (j < n2)
 {
 arr[k] = M[j];
 j++;
 k++;
 }
}

void mergeSort(int arr[], int l, int r)
 {
 if (l < r)
 {

 int m = l + (r - l) / 2;
 mergeSort(arr, l, m);
 mergeSort(arr, m + 1, r);
// Merge the sorted subarrays
 merge(arr, l, m, r);
 }
}
// Print the array
void printArray(int arr[], int size)
 {
 for (int i = 0; i < size; i++)
 printf("%4d ", arr[i]);
}
// Driver program
int main()
 {
 int arr[100] , size , i;
 clrscr();
 printf("\n Enter No of Elements In Array : ");
 scanf("%d" , &size);
 printf("\n Array Data: \n");
 for(i = 0 ; i < size ; i++)
    scanf("%d" , &arr[i]);
 printf("\n Before Sorting: \n");
 for(i = 0 ; i < size ; i++)
    printf("%4d" , arr[i]);
 for(i = 1 ; i < size ; i++)
 {
	if(arr[i] < arr[i - 1])
		break;
 }
 if(i == size)
 {
	printf("\n Inputted Data Is Already In Sorted Manner.");
	getch();
	return 0;
 }
 mergeSort(arr, 0, size - 1);
 printf("\nAfter Sorting: \n");
 printArray(arr, size);
}
