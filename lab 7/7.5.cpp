#include<iostream>
using namespace std;
class time{
	private:
		int hour,minutes;
	public:
		void display(){
			cout<<this->hour<<":"<<this->minutes<<endl;
		}
		time(int a,int b=0){
			this->hour=a;
			this->minutes=b;
			this->display();
		}
		time(){
			this->hour=00;
			this->minutes=00;
			this->display();
		}
};
int main(){
	time t1(10,34);
	time t2(11);
	time t3;
	return 0;
}
