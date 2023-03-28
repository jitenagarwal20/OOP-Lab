#include<iostream>
using namespace std;
void display(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"how many inputs:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter element "<<i+1<<":";
		cin>>arr[i];
	}
	printf("array before swapping:\n");
	display(arr,n);
	for(int i=0;i<n-1;i+=2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	cout<<"\narray after swapping:\n";
	display(arr,n);
	return 0;
}
