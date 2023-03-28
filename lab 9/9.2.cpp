#include<iostream>
#include<math.h>
using namespace std;
class complex{
	float rl,img;
	public:
		void get_data(){
			cout<<"enter the real part:";
			cin>>rl;
			cout<<"enter the imaginary part:";
			cin>>img;
		}
		complex operator +(complex &c){
			complex c1;
			c1.rl=rl+c.rl;
			c1.img=img+c.img;
			return c1;
		}
		complex operator -(complex &c){
			complex c1;
			c1.rl=rl-c.rl;
			c1.img=img-c.img;
			return c1;
		}
		complex operator /(complex &c){
			complex c1;
			float den=pow(rl,2)+pow(c.rl,2);
			c1.rl=((rl*c.rl)+img*c.img)/den;
			c1.img=((img*c.rl)-c.img*rl)/den;
			return c1;
		}
		complex operator *(complex &c){
			complex c1;
			c1.rl=(rl*c.rl)-img*c.img;
			c1.img=(rl*c.img) + img*c.rl;
			return c1;
		}
		void display(){
			cout<<"real part:"<<rl<<" imaginary part:"<<img<<endl;
		}
};
int main(){
	complex c1,c2,c3;
	c1.get_data();
	c2.get_data();
	cout<<"complex number 1:";
	c1.display();
	cout<<"complex number 2:";
	c2.display();
	c3=c1+c2;
	cout<<"after adding the complex numbers we get:";
	c3.display();
	c3=c1-c2;
	cout<<"after subtracting the complex numbers we get:";
	c3.display();
	c3=c1*c2;
	cout<<"after multiplying the complex numbers we get:";
	c3.display();
	c3=c1/c2;
	cout<<"after dividing the complex numbers we get:";
	c3.display();
	return 0;
}
