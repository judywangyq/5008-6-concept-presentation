#include <stdio.h> // Include file for standart input/output
#include <stdlib.h>
#include <time.h>

#define EXPERIMENT 0 // use this for the experimentation in this lab

// =============== Helper Functions ===============

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int temp[], int l, int m, int r) {
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

void mergeSort(int arr[], int temp[],int l, int r){
	if (l < r){
		int m = (l+r)/2;
		mergeSort(arr,temp,l,m);
		mergeSort(arr,temp,m+1,r);
		merge(arr,temp,l,m,r);
	}
}

void sortIntegers(int* array, unsigned int size){
    int* temp = (int*) malloc(size * sizeof(int));
	mergeSort(array,temp,0,size-1);
	free(temp);
}


void printIntArray(int* array, unsigned int size){
  unsigned int i; // Note: 'unsigned int' is a datatype for storing positive integers.
  for(i = 0; i < size; i=i+1){
    printf("%d ",array[i]);
  }
  printf("\n");
}
