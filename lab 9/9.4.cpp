#include<iostream>
#include<string>
using namespace std;
class systm{
	string b_no;
	public:
		void get_data(){
			cout<<"enter the binary number:";
			cin>>b_no;
		}
		void operator !(){
			int n=b_no.size();
			for(int i=0;i<n;i++){
				if(b_no[i]=='1'){
					b_no[i]='0';
				}
				else{
					b_no[i]='1';
				}
			}
		}
		void display(){
			cout<<b_no<<endl;
		}
};
int main(){
	systm s1;
	s1.get_data();
	cout<<"entered binary number is:";
	s1.display();
	!s1;
	cout<<"after using negation operator:";
	s1.display();
	return 0;
}
