#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int n1,n2;
	cout<<"enter number 1:";
	cin>>n1;
	cout<<"enter number 2:";
	cin>>n2;
	cout<<"before swap x = "<<n1<<" and y = "<<n2<<endl;
	swap(n1,n2);
	cout<<"after swap x = "<<n1<<" and y = "<<n2;
}

