
#include<iostream>
using namespace std;

void merge(int* arr,int start,int end){
//	cout<<"hello"<<endl;
	//we need to merge the 2 sorted arrays
	//arr actually has been sorted till start to mid and also form mid to end, now we need to combine these two
	
	//it  will be easier for us if there are 2 sorted arrays seperately
	
	//so we create 2 sorted arrays
	
	int mid = (start + end)/2;
	
	int len1,len2;
	
	len1 = mid-start+1;  //size of first sorted array
	len2 = end-mid;  //size of second sorted array
	
	
	//creating the new arrays of size we found
	int* arr1 = new int[len1];
	int* arr2 = new int[len2];
	//creating the arrays by copying the elements
	int main_arr_index=start;    //we can keep track of which element of main array we are currently traversing
	
	int i;
	for(i=0;i<len1;i++){       //this is basicaly copying all the first half of the sorted array to arr1
		arr1[i] = arr[main_arr_index];
		main_arr_index++;
	}
	
	for(i=0;i<len2;i++){       //this is basicaly copying all the second half of the sorted array to arr2
		arr2[i] = arr[main_arr_index];
		main_arr_index++;
	}
	
	//now we need to completely sort the main array, we need to completey sort the main array
	
	int index_1,index_2;
	index_1=0;
	index_2=0;
	main_arr_index=start;
	
	//we only need to increase the index of the element which is less and actually getting placed in main array
	while(index_1 < len1 && index_2 < len2){
		if(arr1[index_1] < arr2[index_2]){
			//arr1 ele is < arr2 ele, we place small ele
			arr[main_arr_index] = arr1[index_1];
			main_arr_index++;
			index_1++;
		}
		else{
			arr[main_arr_index] = arr2[index_2];
			main_arr_index++;
			index_2++;
		}
	}
	
	//now this is still one of the array is completely iterated
	
	while(index_1 < len1){
		arr[main_arr_index] = arr1[index_1];
		index_1++;
		main_arr_index++;
	}
	
	while(index_2 < len2){
		arr[main_arr_index] = arr2[index_2];
		index_2++;
		main_arr_index++;
	}
}

void mergeSort(int* arr, int start, int end){
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
	
	int k;
	for(k=0;k<size_arr;k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}

