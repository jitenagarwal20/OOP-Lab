#include<iostream>
using namespace std;
class shape{
	protected:
		double a,b;
	public:
		void getData(double len,double brd){
			a=len;
			b=brd;
		}
		virtual int displayArea(){
			return a*b;
		}
};
class triangle:public shape{
	public:
		int displayArea(){
			return 0.5*a*b;
		}
};
class rectangle:public shape{
	public:
		int displayArea(){
			return a*b;
		}
};
int main(){
	int l,b;
	cout<<"enter length breadth:";
	cin>>l>>b;
	triangle t;
	t.getData(l,b);
	cout<<"area of triangle is "<<t.displayArea();
	rectangle r;
	r.getData(l,b);
	cout<<"\narea of rectangle is "<<r.displayArea();
	return 0;
}
