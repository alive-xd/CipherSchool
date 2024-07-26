#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		int attendance;
		float total_marks;
		
		void calculate_percentage(){
			cout<<total_marks<<"%";
		}
};

class bank_client{
	private:
		int credit_no;
		int cvv;
		string password;
	
	public:
		string name;
		string user_name;
		
		void set_credit_card_no(int number){
//			credit_no = number;
			this->credit_no = number;
			cout<<"the address of instance is "<<this<<endl;
		}
		
		void get_credit_card_no(){
			cout<<"credit card number is "<<credit_no<<endl;
		}	
};

int main(){
//	Student a,b,c;
//	
//	a.name = "rohit";
//	a.attendance = 90;
//	a.total_marks = 69;
//	
//	a.calculate_percentage();

	bank_client a,b,c;
//	a.name = "rohit";
//	a.password = "enjoyc++";
//	a.cvv=788;
//	a.credit_no = 12221991;
	
//	cout<<"The password of rohit is: "<<a.password;
	
	a.set_credit_card_no(1221991);
	a.get_credit_card_no();
	
	cout<<"the address of instance is "<<&a;
	
	return 0;
}
