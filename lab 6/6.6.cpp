#include<iostream>
using namespace std;
void increment(int &a){
	a++;
}
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	cout<<"before increment x = "<<n<<endl;
	increment(n);
	cout<<"after increment x = "<<n;
	return 0;
}

