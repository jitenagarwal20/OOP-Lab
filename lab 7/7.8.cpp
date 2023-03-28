#include<iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		static int i;
		void display(){
			cout<<"x coordinate="<<this->x;
			cout<<"\ny coordinate="<<this->y<<endl;
		}
		Point(int a=0,int b=0){
			i++;
			cout<<"hello constructor hu bhai"<<endl;
			this->x=a;
			this->y=b;
			this->display();
		}
		~Point(){
			cout<<"le bhai tera career jaise isko bhi destroy kar diya"<<endl;
		}
};
int Point:: i = 0;
int main(){
	int a,b;
	cout<<"enter coordinate of x:";
	cin>>a;
	cout<<"enter coordinate of y:";
	cin>>b;
	Point p(a,b);
	Point p2(a);
	Point p3;
	cout<<p.i<<" times objects were created"<<endl;
	return 0;
}
