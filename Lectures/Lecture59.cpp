//deletion in linked list
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

void insertatmiddleafterwhichelement(node* &head, int location, int data){
	node* temp = new node(data);
	node* var = head;
	
	while(var->data != location){
		var = var->next;
		
		if(var == NULL){
			cout<<"The location doesn't exist, check the location again...";
		}
	}
	//var will have the node address of the element at which the new data is going to inserted
	temp->next = var->next;
	var->next = temp;
}

void deletenodeoflinkedlist(node* &head, int data){
	if(head->data == data){
		cout<<"head of linked list is going to be deleted!!!"<<endl;
		head = head->next;
		return;
	}
	
	node* temp = head;
	node* prev;
	while(temp->data != data){
		if(temp->next == NULL){
			cout<<"element doesn't exist!!! "<<endl;
			return;
		}
		prev = temp;
		temp = temp->next;
	}
	if(temp->next == NULL){
		prev->next = NULL;
		return;
	}
	prev->next = prev->next->next;
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
	
	insertatmiddleafterwhichelement(head,3,4);
	insertatmiddleafterwhichelement(head,5,6);
	
	printLinkedList(head);
	
//	insertatmiddleafterwhichelement(head,105,106);
    
    //now delete 2,6,10
    deletenodeoflinkedlist(head,2);
    printLinkedList(head);
    deletenodeoflinkedlist(head,10);
    printLinkedList(head);
    deletenodeoflinkedlist(head,6);
    printLinkedList(head);
    deletenodeoflinkedlist(head,1);
    
    printLinkedList(head);
    
	return 0;
}
