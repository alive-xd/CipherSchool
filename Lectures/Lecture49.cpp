#include<iostream>
using namespace std;

int fib(int input){
	if(input == 0 || input == 1){   //Base case, i.e the point where it stops
		return 1;
	}
	int final_answer = fib(input-1) + fib(input-2);
	
	return final_answer;
}

int main(){
	int input;
	cout<<"Enter the numbers to find the fibonacci series: ";
	cin>>input;
	
	cout<<fib(input);
	return 0;
}
