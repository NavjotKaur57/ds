#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
} 
void printArray(int arr[], int n) 
{ 
   int i; 
   for (i=0; i < n; i++) 
       printf("%d ", arr[i]); 
   printf("\n"); 
} 
  
int main() 
{ 
  int arr[100];
  int n,x;
  cout<<"enter total elements\n";
  cin>>n;
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
    insertionSort(arr, n);
	cout<<"enter new element\n";
	cin>>x;
	arr[n]=x; 
insertionSort(arr, n+1);	
    printArray(arr, n+1); 
  
    return 0; 
} 
