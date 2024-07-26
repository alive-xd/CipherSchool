#include<iostream>
using namespace std;
int main(){
	int a[10];
	
	int i;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	
	//start of selection sort
	
	for(int i=0;i<9;i++){
	    int least_index=i; //stores index of the least element
		int j;
		for(j=i+1;j<10;j++){
			if(a[j]<a[least_index]){
				least_index=j;
			}
		}
		
		int temp;
		
		//swapping the first with least element
		temp = a[i];
		a[i] = a[least_index];
		a[least_index] = temp; 	
	}
	
	cout<<"After sorting: "<<endl;
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
}
