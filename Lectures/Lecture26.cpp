#include<iostream>
using namespace std;

int main(){
	string name;  //string is a datatype
	cin>>name;
	cout<<name;
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	
	//	char r,o,h,i,t;
	//	
	//	cin>>r>>o>>h>>i>>t;
    char name[1000];
    cout<<"Enter your name: (Note: Enter # after end of your name: )";
    int i=0;
    while(1){
    	cin>>name[i];
    	if(name[i] == '#'){
    		break;
		}
    	i++;  //increasing by 1 every time
	}
    
    
	//    for(int i=0;i<6;i++){
	//    	cin>>name[i];
	//	}
	//	cout<<"name is: ";
	//	for(int i=0;i<6;i++){
	//    	cout<<name[i];
	//	}
	i=0;  //again initialize to 0 to print from beginning
    while(name[i] != '#'){
    	cout<<name[i];
    	i++;
	}
	return 0;
}
