#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
}
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
 
int main() 
{ 
   int n1,n2;
   int n3;
   int a1[100],a2[100],a3[100];
   cout<<"enter total elements of array1\n";
   cin>>n1;
   cout<<"enter elements of array1:\n";
   for(int i=0;i<n1;i++){
   	cin>>a1[i];
   } 
   cout<<"enter total elements of array2\n";
   cin>>n2;
   cout<<"enter elements of array2:\n";
   for(int i=0;i<n2;i++){
   	cin>>a2[i];
   } 
   cout<<"sorted array1 using selection sort\n";
    selectionSort(a1, n1);  
    printArray(a1, n1); 
    
    cout<<"sorted array2 using selection sort\n";
    selectionSort(a2, n2);  
    printArray(a2, n2);
    
    n3=n1+n2;
    for(int i=0;i<n1;i++){
    	a3[i]=a1[i];
	}
	int nn=n1;
	for(int j=0;j<n2;j++){
		a3[nn+j]=a2[j];
	}
	mergeSort(a3,0,n3-1);
	cout<<"sorted using mergeSort\n";
	printArray(a3,n3);
    return 0; 
} 
