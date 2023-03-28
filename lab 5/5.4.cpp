#include<iostream>
using namespace std;
class school{
	private:
		char name[20];
		int roll;
		int total;
		float avg;
	public:
		void get(){
			cout<<"enter the name of the student:";
			cin>>name;
			cout<<"enter the roll number of the student:";
			cin>>roll;
			cout<<"enter the total marks scored by the student:";
			cin>>total;
		}
		void get_avg(school *s,int n,int ind){
			float t=0;
			for(int i=0;i<n;i++){
				t+=s[i].total;
			}
			t/=n;
			for(int i=0;i<n;i++){
				if(i==ind){
					s[i].avg=t;
					cout<<"\nname of the student is "<<s[i].name;
					cout<<",roll number of the student is "<<s[i].roll;
					cout<<" and total marks scored by the student is "<<s[i].total;
				}
			}
			cout<<"\navg marks scored "<<t;
		}
};
int main(){
	int n;
	cout<<"how many inputs you want to take:";
	cin>>n;
	school student[n];
	for(int i=0;i<n;i++){
		student[i].get();
	}
	for(int i=0;i<n;i++){
		student[i].get_avg(student,n,i);
	}
	return 0;
}
