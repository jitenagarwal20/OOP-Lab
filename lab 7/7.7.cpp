#include<iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		void display(){
			cout<<"x coordinate="<<this->x;
			cout<<"\ny coordinate="<<this->y<<endl;
		}
		Point(int a,int b){
			cout<<"inside constructor"<<endl;
			this->x=a;
			this->y=b;
			this->display();
		}
		~Point(){
			cout<<"inside destructor";
		}
};
int main(){
	Point p(10,12);
	return 0;
}
