#include<iostream>
using namespace std;
void minandmax(int *a,int *min,int *max){
	int i;
	int small=a[0],large=a[0];
	for(i=0;i<6;i++){
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small){
			small=a[i];
		}
	}
}
int main(){
	int a[5];
	int i;
	for(i=0;i<6;i++){
		a[i]=i;
	}
	minandmax(a,&min,&max);
	
}
