
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

void printLinkedList(node* &head){
	if(head == NULL){
	   cout<<"The linkedList is still empty!!!"<<endl;	
	   return;
	}
	
	node* temp;
	temp = head;
	
	//this is called transversing a linked list
	while(temp != NULL){
		cout<<temp->data<<"  --> ";
		temp = temp->next;
	}
}

int main(){
	node* head=NULL;
	printLinkedList(head);
	
	node* node1 = new node(3);
	head = node1;
	printLinkedList(head);
	cout<<endl;
	
	node* node2 = new node(5);
	node1->next = node2;
	printLinkedList(head);
	cout<<endl;
	
	node* node3 = new node(7);
	node2->next = node3;
	printLinkedList(head);
	cout<<endl;
	//	printnode(node1);
	//	printnode(node2);
	//	printnode(node3);
		
	//	node1->next = node2;  //initially it points to null , but now it is pointing to node2 address
	//	node2->next = node3;
	////	printnode(node1);
	////	cout<<endl<<node2<<endl;
	////	printnode(node2);
	////	cout<<endl<<node3<<endl;
	////	printnode(node3);
	//    printnode(node1);
	//    printnode(node1->next);   //node2 = node1->next
	//    printnode(node1->next->next);  //node3 = node2->next =node1->next->next
	//    
    //head is nothing but a fancy term to indicate the top or first element of linkedlist
	
	return 0;
}

