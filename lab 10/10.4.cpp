#include<iostream>
using namespace std;
class square{
	int length;
	public:
		void get_data(int length){
			this->length=length;
		}
		void display(){
			cout<<"Length of the side of the square is "<<length<<"\nSo Area of the square is "<<length*length<<endl;
		}
};
int main(){
	square s;
	int length;
	cout<<"enter the length of the side of the square:";
	cin>>length;
	s.get_data(length);
	s.display();
	return 0;
}
