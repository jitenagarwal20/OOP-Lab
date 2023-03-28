#include<iostream>
using namespace std;
class vector{
	int x,y,z;
	public:
		void get_data(){
			cout<<"enter the x coordinate:";
			cin>>x;
			cout<<"enter the y coordinate:";
			cin>>y;
			cout<<"enter the z coordinate:";
			cin>>z;
		}
		void operator ++(int);
		void operator --(void);
		void operator -(){
			x=-x;
			y=-y;
			z=-z;
		}
		void display(){
			cout<<"x coordinate:"<<x;
			cout<<",y coordinate:"<<y;
			cout<<",z coordinate:"<<z<<endl;
		}
};
void vector::operator ++(int){
			x=x+1;
			y=y+1;
			z=z+1;
		}
void vector::operator --(void){
			x=x-1;
			y=y-1;
			z=z-1;
		}
		
int main(){
	vector v1;
	v1.get_data();
	cout<<"vector 1:"<<endl;
	v1.display();
	v1++;
	cout<<"after using increment operator:"<<endl;
	v1.display();
	--v1;
	cout<<"after using decrement operator"<<endl;
	v1.display();
	-v1;
	cout<<"after using an unary minus operator"<<endl;
	v1.display();
	return 0;
}
