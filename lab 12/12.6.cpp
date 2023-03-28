#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b){
	return a+b;
}
float sum(float a,float b){
	return a+b;
}
int main(){
	int obj1,obj2;
	cout<<"Enter number 1:";
	cin>>obj1;
	cout<<"Enter number 2:";
	cin>>obj2;
	cout<<sum<int>(obj1,obj2);
	return 0;
}
