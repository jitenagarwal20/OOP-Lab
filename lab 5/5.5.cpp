#include<iostream>
#include<string>
using namespace std;
class book{
	string book_name,author;
	int price;
	public:
		void get(){
			cout<<"enter the name of the book:";
			cin>>book_name;
			cout<<"enter the author name:";
			fflush(stdin);
			cin>>author;
			cout<<"enter the price of the book:";
			fflush(stdin);
			cin>>price;
		}
		friend void display(int a,int b,book b1);
};
void display(int a,int b,book b1){
	if(b1.price>=a && b1.price<=b){
		cout<<b1.book_name<<" by "<<b1.author<<endl;
	}
}

int main(){
	int n;
	void display(int a,int b,book b1);
	cout<<"enter number of inputs you want:";
	cin>>n;
	book lib[n];
	for(int i=0;i<n;i++){
		lib[i].get();
	}
	int lw,up;
	cout<<"enter the range of price\nlower limit:";
	cin>>lw;
	cout<<"upper limit:";
	cin>>up;
	cout<<"books within the range are:\n";
	for(int i=0;i<n;i++){
		display(lw,up,lib[i]);
	}
	return 0;
}

