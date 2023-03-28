#include <iostream>
using namespace std;
class Circle
{
protected:
    float radius;
public:
    void setRadius()
    {
    	float radius;
        cout<<"Enter the radius- ";
        cin>>radius;
        this->radius = radius;
    } 
    virtual double getArea()
    {
        return 3.14 * radius * radius;
    }
};
class Rectangle : public Circle{
public:
	int b;
    double getArea(){
        cout<<"\nEnter the breadth- ";
        cin>>b;
        cout<<"Area of rectangle- "; 
        return (radius * b);
    }
};
int main()
{
    Rectangle r;
    int c;
    r.setRadius();
    cout <<"Area of Circle- "<<r.Circle::getArea()<<endl;
    cout<<r.getArea()<<endl;
    return 0;
}
