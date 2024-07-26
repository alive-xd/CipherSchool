
#include<iostream>
using namespace std;

class node{
	public:
		int data;   // assume it is storing int type of data
		node* next; 
		
		node(int data_input){
			this->data = data_input;
			this->next = NULL;
		}
};

void printnode(node* &node){
	cout<<"value "<<node->data<<endl;
	cout<<"Address "<<node->next<<endl;
}

int main(){
	node* node1 = new node(3);
	node* node2 = new node(5);
	node* node3 = new node(7);
//	printnode(node1);
//	printnode(node2);
//	printnode(node3);
	
	node1->next = node2;  //initially it points to null , but now it is pointing to node2 address
	node2->next = node3;
	printnode(node1);
	cout<<endl<<node2<<endl;
	printnode(node2);
	cout<<endl<<node3<<endl;
	printnode(node3);
	return 0;
}

