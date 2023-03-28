#include<iostream>
using namespace std;
class obj2;
class obj1;
class obj1{
	public:
		int data_1;
		int roll;
		void get(){
			cout<<"enter value for data:";
			cin>>data_1;
			cout<<"enter roll no.:";
			cin>>roll;
		}
		void display(){
			cout<<"\ndata is "<<data_1<<" roll number is "<<roll;
		}
		friend void exchange(obj1 c1,obj2 c2);
};
class obj2{
	public:
		int data_2;
		int roll;
		void get(){
			cout<<"enter value for data:";
			cin>>data_2;
			cout<<"enter roll no.:";
			cin>>roll;
		}
		void display(){
			cout<<"\ndata is "<<data_2<<" roll number is "<<roll;
		}
		friend void exchange(obj1 c1,obj2 c2);
};
void exchange(obj1 *c1,obj2 *c2){
	int temp=c1->data_1;
	c1->data_1=c2->data_2;
	c2->data_2=temp;
}
int main(){
	obj1 n1;
	n1.get();
	obj2 n2;
	n2.get();
	cout<<"data before swap";
	n1.display();
	n2.display();
	exchange(&n1,&n2);
	cout<<"\ndata after swap";
	n1.display();
	n2.display();
}
