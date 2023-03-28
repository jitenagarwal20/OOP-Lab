#include<iostream>
using namespace std;
float area(int x){
	return 3.14*x*x;
}
float area(float l,float b){
	return l*b;
}
float area(int h,int b){
	return 0.5*h*b;
}
int main(){
	int x,r;
	cout<<"enter the radius of the circle:";
	cin>>r;
	cout<<"area of the circle is "<<area(r)<<endl; 
	float l,b1;
	cout<<"enter the length of the recatangle:";
	cin>>l;
	cout<<"enter the breadth of the recatangle:";
	cin>>b1;
	cout<<"area of the rectangle is "<<area(l,b1)<<endl; 
	int h,b2;
	cout<<"enter the height of the triangle:";
	cin>>h;
	cout<<"enter the base of the triangle:";
	cin>>b2;
	cout<<"area of the triangle is "<<area(h,b2);
}
