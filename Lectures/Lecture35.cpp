#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> a;
	a.push(5);
	a.push(6);
	a.push(7);
	
	cout<<a.top();
	a.pop();
	cout<<a.top();
}
