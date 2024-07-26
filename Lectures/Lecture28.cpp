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
			credit_no = number;
		}
		
		void get_credit_card_no(){
			cout<<"credit card number is "<<credit_no;
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
//	a.credit_no = 1245875;
	
//	cout<<"The password of rohit is: "<<a.password;
	
	a.set_credit_card_no(124879);
	a.get_credit_card_no();
	
	return 0;
}
