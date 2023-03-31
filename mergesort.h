#include <stdio.h> // Include file for standart input/output
#include <stdlib.h>
#include <time.h>

#define EXPERIMENT 0 // use this for the experimentation in this lab

// =============== Helper Functions ===============

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int temp[], int l, int m, int r) {
  //TODO: implement merge.
  //use all those parameters in your implementation, including temp array 
  //l is the smallest in an array, m is the middle, and r is the largest
	int leftFirstIndex= l;
	int rightFirstIndex = m+1;
	int originalArrIndex = l;

	for ( originalArrIndex= l; originalArrIndex <= r; originalArrIndex++){
		temp[originalArrIndex] = arr[originalArrIndex];
	}

//reset the original arr index starts from l
	originalArrIndex = l;
//	for (leftFirstIndex = l; leftFirstIndex <= m; leftFirstIndex++){
	while (leftFirstIndex <= m && rightFirstIndex <= r){
		if (temp[leftFirstIndex] <= temp[rightFirstIndex]){
			arr[originalArrIndex] = temp[leftFirstIndex];
			leftFirstIndex++;		
		}
		else{
			arr[originalArrIndex] = temp[rightFirstIndex];
			rightFirstIndex++;
		}
		originalArrIndex++;
	}	
	
// left index will stop at somewhere where no value is larger than right
//	for (i <= m;i++){
	while (leftFirstIndex <= m){
		arr[originalArrIndex] = temp[leftFirstIndex];
		leftFirstIndex++;
		originalArrIndex++;
		}
	
	while (rightFirstIndex <= r){
		arr[originalArrIndex] = temp[rightFirstIndex];
		rightFirstIndex++;
		originalArrIndex++;
		}
}


// TODO: Implement your mergeSort function here
void mergeSort(int arr[], int temp[],int l, int r){
	if (l < r){
		int m = (l+r)/2;
		mergeSort(arr,temp,l,m);
		mergeSort(arr,temp,m+1,r);
		merge(arr,temp,l,m,r);
	}
}


// Provided below is a sort function. We have also
// provided a template for how to document functions
// to help organize your code.
// Name: sortIntegers
// Input(s):
//          (1) 'array' is a pointer to an integer address. 
//              This is the start of some 'contiguous block of memory' that we will sort.
//          (2) 'size' tells us how big the array of data is we are sorting.
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.

void sortIntegers(int* array, unsigned int size){
    int* temp = (int*) malloc(size * sizeof(int));
	mergeSort(array,temp,0,size-1);
	free(temp);
}


// Input: A pointer to an array (i.e. the array itself points to the first index)
//        The size of the array (Because we do not know how big the array is automatically)
void printIntArray(int* array, unsigned int size){
  unsigned int i; // Note: 'unsigned int' is a datatype for storing positive integers.
  for(i = 0; i < size; i=i+1){
    printf("%d ",array[i]);
  }
  printf("\n");
}

