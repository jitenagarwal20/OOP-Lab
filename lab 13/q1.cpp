#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream obj("student.txt");
	int roll,marks[3];
	string name;
	cout<<"Enter the roll number of the student:";
	cin>>roll;
	cout<<"Enter the name of the student:";
	cin>>name;
	for(int i=0;i<3;i++){
		cout<<"Enter the marks of student in subject "<<i+1<<":";
		cin>>marks[i];
	}
	obj<<name<<" ";
	obj<<roll<<"\n";
	for(int i=0;i<3;i++){
		obj<<marks[i]<<"\n";
	}
	obj.close();
	return 0;
}
