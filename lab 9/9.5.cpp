#include<iostream>
using namespace std;
class distnce{
	int feet,inch;
	public:
		void get_data(){
			cout<<"enter no. of feet:";
			cin>>feet;
			cout<<"enter no. of inches:";
			cin>>inch;
		}
		int operator >(distnce &d){
			int a,b;
			a=feet+(inch*12);
			b=d.feet+(d.inch*12);
			if(a>b){
				return 1;
			}
			else{
				return 0;
			}
		}
		int operator <(distnce &d){
			int a,b;
			a=feet+(inch*12);
			b=d.feet+(d.inch*12);
			if(a>b){
				return 0;
			}
			else{
				return 1;
			}
		}
		int operator !=(distnce &d){
			int a,b;
			a=feet+(inch*12);
			b=d.feet+(d.inch*12);
			if(a==b){
				return 0;
			}
			else{
				return 1;
			}
		}
		void display(){
			cout<<"feet:"<<feet<<" inches:"<<inch<<endl;
		}
};
int main(){
	distnce d1,d2;
	d1.get_data();
	d2.get_data();
	cout<<"distance 1";
	d1.display();
	cout<<"distance 2:";
	d2.display();
	if(d1>d2){
		cout<<"distance 1 is greater than distance 2"<<endl;
	}
	else{
		if(d1<d2){
			cout<<"distance 1 is lesser than distance 2"<<endl;
		}
	}
	if(d1!=d2){
		cout<<"distance 1 and distance 2 are not same"<<endl;
	}
	else{
		cout<<"distance 1 and distance 2 are same"<<endl;
	}
	return 0;
}
