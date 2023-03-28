#include<iostream>
using namespace std;
void display(char c='*',int n=80){
	for(int i=0;i<n;i++){
		printf("%c ",c);
	}
}
int main(){
	char ch;
	int n;
	cout<<"enter the character you want to print:";
	scanf("%[^\n]c",&ch);
	cout<<"enter how many time you want that character to be displayed:";
	cin>>n;
	if(ch=='\0'){
		display();
	}
	else{
		display(ch,n);
		cout<<"hello";
	}
	//cout<<endl;
	//display(ch);
	//cout<<endl;
	//display();
	return 0;
}
