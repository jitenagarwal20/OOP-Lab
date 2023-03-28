#include<iostream>
#include<string>
using namespace std;
class Account{
	private:
		string name,acc_type;
		int bal,acc_no;
	public:
		Account(string n,string t,int b,int no){
			this->name=n;
			this->acc_type=t;
			this->bal=b;
			this->acc_no=no;
		}
		void display(){
			cout<<"name of the account holder:"<<this->name<<"\nBalance present in the account:"<<this->bal<<endl;
		}
		void withdraw(int x){
			if(this->bal-x>=0){
				this->bal-=x;
			}
			else{
				cout<<"low account balance";
			}
			this->display();
		}
		void deposit(int x){
			this->bal+=x;
			this->display();
		}
		~Account(){
			cout<<"inside destructor";
		}
};
int main(){
	string name,type;
	int bal,acc_no;
	cout<<"enter the name of the account holder:";
	cin>>name;
	cout<<"enter the type of the account:";
	fflush(stdin);
	cin>>type;
	cout<<"enter the balance present in the account:";
	cin>>bal;
	cout<<"enter the account number:";
	cin>>acc_no;
	Account a1(name,type,bal,acc_no);
	int w;
	cout<<"enter the amount you want to withdraw:";
	cin>>w;
	a1.withdraw(w);
	cout<<"enter the amount you want to deposit:";
	cin>>w;
	a1.deposit(w);
	return 0;
}
