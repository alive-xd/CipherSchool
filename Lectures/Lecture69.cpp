
#include<iostream>
using namespace std;

//this is how node of tree is defined
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		//since each node has the address to node corresponding to the left and dright of root we are able to access the whole tree from the root node
		Node(int data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};

//this is creation of binary tree
void buildTree(Node* root){
	//this is start of creation of binary tree
	int var;
	cout<<" Enter the value : ";
	cin>>var;
	
	//if user enters -1, then there is no node present
	if(var == -1) return;
	
	
	root = new Node(var);
	
	cout<<"now enter data which you want to be left of "<<var;
	buildTree(root->left);
	
	cout<<"now enter data which you want to be right of "<<var;
	buildTree(root->right);
}


//pre order travesing
//it implies we first traverse the node, then the element to left and then right of it
int main(){
	//since we havee created a node, start creation of binary tree
	Node* root;
	buildTree(root);
	return 0;
}

