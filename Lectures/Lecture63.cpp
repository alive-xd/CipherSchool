#include<iostream>
using namespace std;

void merge(int arr[],int start,int end){
	//we need to merge the 2 sorted arrays
	//arr actually has been sorted till start to mid and also form mid to end, now we need to combine these two
}

void mergeSort(int arr[], int start, int end){
	//this recursion need to have a base case
	//that is when there is only one element:
	if(start >= end){  //this implies there is only 1 element, we cannot split it further
		return;
	}
	int mid = (start + end)/2;
	
	//we are also using same code to sort smaller arrays
	
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	
	//but after we have sorted the smaller arrays, we need to merge them to get bigger arrays
	
	merge(arr,start,end);
}

int main(){
	int size_arr;
	int arr[5] = {1,5,3,10,4};
	size_arr = 5;
	
	mergeSort(arr,0,size_arr-1);
	return 0;
}
