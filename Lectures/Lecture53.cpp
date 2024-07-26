#include<iostream>
using namespace std;

void display(int n, int arr[]){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void display2(int n, int *arr){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int a[10];
	
	cout<<"values for comparision : "<<endl;
	
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The address of a[0] is: "<<a<<endl;
	cout<<"The address of a[1] is: "<<a<<endl;
	
	int n;
	cin>>n;
	int list[n];
	for(int i=0;i<n;i++){
		cin>>list[i];
	}
	
	display(n, list);
	display2(n, list);
	
	return 0;
}
