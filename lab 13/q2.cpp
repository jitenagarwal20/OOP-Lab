#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream obj;
	obj.open("student.txt");
	int roll,marks[3],total_marks=0;
	string name;
	obj>>name;
	obj>>roll;
	for(int i=0;i<3;i++){
		obj>>marks[i];
	}
	for(int i=0;i<3;i++){
		total_marks+=marks[i];
	}
	cout<<"Name of the student:"<<name<<endl;
	cout<<"Roll number of the student:"<<roll<<endl;
	cout<<"Total marks scored by the student:"<<total_marks<<endl;
	obj.close();
	return 0;
}
