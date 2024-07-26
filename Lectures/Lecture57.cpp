
//inserting new elements into linkedlist when head is given
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
	cout<<endl;
}

void insertatstart(node* &head, int data){
	node *temp = new node(data);
	if(head == NULL){
		head = temp;
		return;
	}
	temp->next = head;  //we assigned the address of the starting node to initial head 
	head = temp;
}

void insertatend(node* &head, int data){
	node *temp = new node(data);
	if(head == NULL){
		head = temp;
		return;
	}
	
	node *end;
	end = head;
	
	while(end->next != NULL){
		end = end->next;
	}
	//after while loop is complete , we reach the end of the linked list
	end->next = temp;
}

int main(){
	node* head=NULL;
	
	insertatend(head,5);
	insertatend(head,7);
	insertatend(head,8);
    
    insertatstart(head,3);
    insertatstart(head,2);
    
    insertatend(head,9);
	insertatend(head,10);
	
	printLinkedList(head);
	return 0;
}

