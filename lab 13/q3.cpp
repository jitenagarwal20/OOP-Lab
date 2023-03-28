#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string capital;
	char line[80];
	ofstream obj;
	obj.open("States.txt");
	obj<<"West Bengal\n";
	obj<<"Maharashtra\n";
	obj<<"Tamil Nadu\n";
	obj.close();
	obj.open("Capital.txt");
	obj<<"Kolkata\n";
	obj<<"Mumbai\n";
	obj<<"Chennai\n";
	obj.close();
	ifstream obj1,obj2;
	obj1.open("States.txt");
	obj2.open("Capital.txt");
	for(int i=1;i<=3;i++){
		if(obj1){
			obj1.getline(line,80);
		}
		if(obj2){
			obj2>>capital;
		}
		cout<<"Capital of "<<line<<" is "<<capital<<endl;
	}
	return 0;
}
