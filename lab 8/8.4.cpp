#include<iostream>
#include<string>
using namespace std;
class student{
	protected:
		int roll_no;
		string name;
	public:
		void get_no(int a){
			roll_no=a;
		}
		void get_name(string n){
			name=n;
		}
};
class exam:virtual public student{
	protected:
		int e_grade;
	public:
		void get_egrade(int a){
			e_grade=a;
		}
};
class sports:virtual public student{
	protected:
		int s_grade;
	public:
		void get_sgrade(int a){
			s_grade=a;
		}
};
class result:public exam,public sports{
	int total;
	public:
		void display(){
			total=e_grade+s_grade;
			cout<<"total marks scored by "<<name<<" roll no "<<roll_no<<" is "<<total;
		}
};
int main(){
	result r;
	string name;
	cout<<"enter the name of the student:";
	cin>>name;
	r.get_name(name);
	r.get_no(13);
	r.get_egrade(40);
	r.get_sgrade(45);
	r.display();
	return 0;
}
