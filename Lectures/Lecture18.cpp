#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
    cout<<"The values of  a and b after swapping are: "<<a <<" "<<b;
    return;
}
int main(){
    int a,b;
    a=56;
    b=90;

    swap(a,b);
    cout<<"The values of  a and b after swapping are: "<<a <<" "<<b;
    
    return 0;


}
