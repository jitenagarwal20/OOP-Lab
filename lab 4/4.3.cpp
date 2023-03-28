#include <iostream>
using namespace std;
class student
{
    int roll,i;
    char name[20];
    int marks[5];
    int total;
    float perc;
    public:
        void input(void);
        void display(void);
        void calc();
};
void student::calc()
{
    for (i=0;i<5;i++)
    	total+=marks[i];
    perc=(1.0*total)*0.2;
}
void student::input()
{
    cout<<"Enter name:" ;
    cin>>name;
    fflush(stdin);
    cout<<"Enter roll:";
    cin>>roll;
    cout<<"Enter marks for 5 subjects:\n";
    for(i=0;i<5;i++)
        {
        	cout<<"Enter marks for subject "<<i+1<<":";
            cin>>marks[i];
        }
}
void student::display()
{
    cout << "Details- \nName of the student is "<< name << ",Roll Number is " << roll << " \nTotal marks scored is " << total<<" and percentage obtained is "<<perc;
}
int main()
{
    student s;
    s.input();
    s.calc();
    s.display();
    return 0;
}
