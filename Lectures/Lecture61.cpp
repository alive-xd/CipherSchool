
#include<iostream>
using namespace std;

class Queue{
	public:
		int queue[1000];
		int max_capacity;
		int size;
		int front,rear;
		
		Queue(){
			this->front = 0;
			this->rear = -1;
			this->max_capacity = 1000;
			this->size = 0;
		}
		
		void enqueue(int data){   //for insertion in queue
			if(size == max_capacity){
				cout<<"maximum capacity has been reached";
				return;
			}
			rear = (rear+1)%max_capacity;
			queue[rear] = data;
			size++;
		}
		
		void dequeue(){
			if(size == 0){
				cout<<"The size of the queue is 0 and no more elements to dequeue"<<endl;
			}
			cout<<"the element dequeued is "<<queue[front]<<endl;
			front++;
			size--;
		}
		
		void peekqueue(){
			cout<<"The element at the front of queue is: "<<queue[front]<<endl;
		}
		
		void sizeofqueue(){
			cout<<"the queue currently has "<<size<<" elements in it"<<endl;
		}
};

int main(){
	Queue q;
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	q.enqueue(1);
	
	q.dequeue();
	q.dequeue();
	
	q.peekqueue();
	
	q.dequeue();
	q.peekqueue();
	q.dequeue(); // error bcoz no more elements	
	return 0;
}

