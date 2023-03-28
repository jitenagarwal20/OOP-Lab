#include<iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(int a,int b){
			this->x=a;
			this->y=b;
			cout<<"x coordinate="<<this->x;
			cout<<"\ny coordinate="<<this->y;
		}
};
int main(){
	int a,b;
	cout<<"enter coordinate of x:";
	cin>>a;
	cout<<"enter coordinate of y:";
	cin>>b;
	Point p(a,b);
	return 0;
}
