#include<iostream>
using namespace std;
class Time{
	float hrs,mins,secs;
	public:
		void get_data(){
			cout<<"enter no. of hours:";
			cin>>hrs;
			cout<<"enter no. of minutes:";
			cin>>mins;
			while(mins>=60){
				hrs++;
				mins-=60;
			}
			cout<<"enter no. of seconds:";
			cin>>secs;
			while(secs>=60){
				mins++;
				secs-=60;
			}
		}
		Time operator +(Time &t){
			Time t1;
			t1.hrs=hrs+t.hrs;
			t1.mins=mins+t.mins;
			if(t1.mins>=60){
				t1.hrs++;
				t1.mins-=60;
			}
			t1.secs=secs+t.secs;
			if(t1.secs>=60){
				t1.mins++;
				t1.secs-=60;
			}
			return t1;
		}
		Time operator -(Time &t){
			Time t1;
			t1.hrs=hrs-t.hrs;
			t1.mins=mins-t.mins;
			t1.secs=secs-t.secs;
			return t1;
		}
		Time operator *(Time &t){
			Time t1;
			t1.hrs=hrs*t.hrs;
			t1.mins=mins*t.mins;
			t1.secs=secs*t.secs;
			while(t1.secs>=60){
				t1.mins++;
				t1.secs-=60;
			}
			while(t1.mins>=60){
				t1.hrs++;
				t1.mins-=60;
			}
			return t1;
		}
		Time operator /(Time &t){
			Time t1;
			t1.hrs=hrs/t.hrs;
			t1.mins=mins/t.mins;
			t1.secs=secs/t.secs;
			return t1;
		}
		void display(){
			cout<<"hours:"<<hrs<<" minutes:"<<mins<<" seconds:"<<secs<<endl;
		}
};
int main(){
	Time t1,t2,t3;
	t1.get_data();
	t2.get_data();
	cout<<"Time 1:";
	t1.display();
	cout<<"Time 2:";
	t2.display();
	t3=t1+t2;
	cout<<"after adding the times we get:";
	t3.display();
	t3=t1-t2;
	cout<<"after subtracting the times we get:";
	t3.display();
	t3=t1*t2;
	cout<<"after multiplying the time we get:";
	t3.display();
	t3=t1/t2;
	cout<<"after dividing the time we get:";
	t3.display();
	return 0;
}
