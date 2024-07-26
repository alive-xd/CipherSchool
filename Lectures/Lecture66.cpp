#include<iostream>
using namespace std;

int partition(int* arr,int start,int end){
	//this func places start index in correct postion and returns original value
	//first find original position of start index
	
	//find all elements which are less than partition element
	int number_less_than_index=0;
	for(int i=start+1;i<end+1;i++){
		if(arr[i] < arr[start]){
			number_less_than_index++;
		}
	}
	
	//now actual index will be:
	int correct_index = start + number_less_than_index;
	
	//simply swap the start element and the correct index element
	
	swap(arr[start],arr[correct_index]);	
	
	//now after we have placed this element int its correct position, we need to make sure that this is actually at its actual position
	
	//make sure that this element is at it's correct position
	
	int i,j;
	
	i=start;
	j=end;
	while(i<correct_index && j>correct_index){
		while(arr[i] < arr[correct_index]){
			//this loop will keep on traversing , until we find an element to right of correct index which is greater than correct index
			i++;
		}
		
		while(arr[j] > arr[correct_index]){
			//this loop will keep on traversing , until we find an element to right of correct index which is less than correct index
			j--;
		}
		
		if(i<correct_index && j>correct_index){
			swap(arr[i],arr[j]);
			
			i++;
			j--;
		}
	}
	
	return correct_index;
}

void quickSort(int* arr, int start, int end){
	//first find partition, partition is element which is at its correct place  ----> its position doesn't change even after sorting
	
//	int partition;
//	arr[start] = partition;   //assuming start element is partition element
	
	if(start >= end){
		return;
	}
	
	int partition_index;
	partition_index = partition(arr,start,end);
	//this function will return the actual position of start element
	
	//since after running function the start element is placed in "correct" position and we know that position throught partition_index, we dont need to change position of it any more
	quickSort(arr,start,partition_index-1);
	quickSort(arr,partition_index+1,end);
}

int main(){
	int arr[7] = {5,1,3,10,7,14,2};
	int size;
	size = 7;
	
	quickSort(arr,0,size-1);
	
	int k;
	for(k=0;k<size;k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}
