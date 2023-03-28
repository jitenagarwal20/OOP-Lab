#include<iostream>
using namespace std;
class Cm;
class Fi{
	private:
		int feet;
		int inch;
	public:
		void get(){
			cout<<"enter feet:";
			cin>>feet;
			cout<<"enter inch:";
			cin>>inch;
			while(inch>=12){
				feet+=1;
				inch-=12;
			}
		}
		void display(){
			cout<<"distance is "<<feet<<" ft and "<<inch<<" inches";
		}
		float total(){
			float t;
			t=feet*0.3;
			t+=inch*0.3*0.08;
			return t;
		}
		friend void compare(Fi d1,Cm d2);
};
class Cm{
	private:
		int metre;
		int cm;
	public:
		void get(){
			cout<<"enter metres:";
			cin>>metre;
			cout<<"enter centimetre:";
			cin>>cm;
			while(cm>=100){
				metre+=1;
				cm-=100;
			}
		}
		void display(){
			cout<<"distance is "<<metre<<" m and "<<cm<<" cm";
		}
		float total(){
			float t;
			t=metre;
			t+=cm*0.01;
			return t;
		}
		friend void compare(Fi d1,Cm d2);
};
void compare(Fi d1,Cm d2){
	int t1=d1.total(),t2=d2.total();
	cout<<"\ngreater one is\n";
	if(t1>t2){
		d1.display();
	}
	else{
		d2.display();
	}
}
int main(){
	Fi a1;
	a1.get();
	Cm a2;
	a2.get();
	compare(a1,a2);
	return 0;
}

