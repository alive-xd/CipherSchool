#include<iostream>
using namespace std;

// we achieve this using something called a "class"
class student{   //class is user-defined data type
	public:
		string name;
		int mids;
		float ends;
		bool pre_abs;
};

class vehicle{
	public:
		string car_name;
		string tyre_name;
		int no_of_tyres;
		int no_of_seats;
};

int main(){
	//there are a class of 30 students and each student has the following data associated with him
	student a,b,c;  //a,b,c are objects of student class, they are of type student
	
	vehicle hyundhi, ferari, suzuki;
	
	return 0;
}
