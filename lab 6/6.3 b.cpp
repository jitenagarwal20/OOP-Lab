#include<iostream>
using namespace std;
void display(char c,int n){
	for(int i=0;i<n;i++){
		printf("%c ",c);
	}
}
void display(char c){
	for(int i=0;i<80;i++){
		printf("%c ",c);
	}
}
void display(){
	char c='*';
	for(int i=0;i<80;i++){
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
	if(n==0 && ch=='\0'){
		display();
	}
	else if(n==0){
		display(ch);
	}
	else{
		display(ch,n);
	}
	return 0;
}
