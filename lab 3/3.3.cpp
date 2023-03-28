#include<iostream>
using namespace std;
int main()
{
    int seconds,minutes,hours;
    cout<<"Enter time in seconds:";
    cin>>seconds;
    minutes=seconds/60;
    hours=minutes/60;
    minutes=minutes%60;
    cout<<seconds<<" Seconds="<<hours<<" Hrs,"<<minutes<<" Mins and "<<(seconds%60)<<" Secs"<<endl;
    return 0;
}
