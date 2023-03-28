#include <iostream> 
using namespace std; 

class distance
{
    int foot, inch;
public:
    void input()
    {
        cout << "Enter the values of distance1 in foot and inches (foot,inche): ";
        cin >> foot >> inch;
    }
    void display()
    {
        cout << "\nThe resultant distance is: " << foot << "ft " << inch << "inch";
    }
    distance add(distance d)
    {
        distance dr;
        dr.foot = d.foot + foot; dr.inch = d.inch + inch; 
        while (dr.inch >= 12)
        {
            dr.inch -= 12;
            dr.foot += 1;
        }
        return (dr);
    }
};

int main()
{
    class distance d1, d2, d3; 
    d1.input();
    d2.input();
    d3 = d1.add(d2); 
    d3.display();

    return 0;
}
