#include<iostream>
using namespace std;

// we achieve this using something called a "class"
class student{   //class is user-defined data type
	public:
		//also private access specifier
		string name;
		int mids;
		float ends;
		bool pre_abs;
		
		void calculate_marks(){ // these are parameters which must be passed while the function of this class is being called
			float total_marks;
			
			total_marks = mids*0.5 + ends*0.75;
			
			cout<<"The marks of: "<<name<<" is "<<total_marks<<endl;
		}
		
		void totalMarksIncludingProject(int project_marks){
			cout<<mids+ends+project_marks;
		}
		
		void calculate_fail_probability(){
			if(ends <= 10){
				cout<<"yes, this student needs to attend the same class for one more year....";
			}
		}
};

class vehicle{
	public:
		string car_name;
		string tyre_name;
		int no_of_tyres;
		int no_of_seats;
		int no_of_miles_travelled;
		
		void distanceTravelledByCar(){
			cout<<no_of_miles_travelled;
		}
};

int main(){
	//there are a class of 30 students and each student has the following data associated with him
	student a,b,c;  //a,b,c are objects of student class, they are of type student
	
	vehicle d,e,f;  //The instance of a class is called an object
	
	//first let us feed the data of student A
	a.name = "pranav";
	a.mids = 50;
	a.ends = 99.7;
	a.pre_abs = 1;
	a.calculate_marks();
	a.totalMarksIncludingProject(10);
	
	d.car_name = "verna";
	d.no_of_seats=2;
	d.no_of_tyres=4;
	d.tyre_name="MRF";
	
	return 0;
}
