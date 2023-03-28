#include <iostream>
using namespace std;
class distance 
{ 
    int foot, inch; 
public: 
    void input()
    { 
        cout << "Enter the values of distance1 in foot and inches (foot,inches): ";
        cin >> foot >> inch; 
    } 
    void display() 
    { 
        cout << "\nThe resultant distance is: " << foot << "ft " << inch << "inches";
    }
    void add(distance d1, distance d2) 
    {
        foot = d1.foot + d2.foot;
        inch = d1.inch + d2.inch;
        while (inch >= 12) 
        { 
            inch -= 12;
            foot += 1;
        } 
    } 
};
int main() 
{ 
    class distance d1, d2, d3;
    d1.input(); 
    d2.input(); 
    d3.add(d1, d2); 
    d3.display();
	return 0;
}
