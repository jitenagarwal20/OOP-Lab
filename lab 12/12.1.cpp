#include<iostream>
using namespace std;
template<typename T>
T min(T *p,int n){
	int i;
	T lw=p[0];
	for(i=1;i<n;i++){
		if(p[i]<lw){
			lw=p[i];
		}
	}
	return lw;
}
int main(){
	int arr[5];
	cout<<"Enter 5 elements into integer array:";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	int lowest=min<int>(arr,5);
	cout<<"Smallest element present in the integer array is "<<lowest;
	float ar[5];
	cout<<"\nEnter 5 elements into float array:";
	for(int i=0;i<5;i++){
		cin>>ar[i];
	}
	float lowst=min<float>(ar,5);
	cout<<"Smallest element present in the float array is "<<lowst;
	return 0;
}
