#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream obj("student.txt");
	int words=-1,lines=-1;
	char ch;
	while(obj){
		obj.get(ch);
		if(ch=='\n'){
			words++;
			lines++;
		}
		else if(ch==' '){
			words++;
		}
	}
	cout<<"Number of the words present in the file are "<<words<<endl;
	cout<<"Number of lines present in the file are "<<lines<<endl;
	return 0;
}
