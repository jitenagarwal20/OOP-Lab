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
            cout << "Enter the radius- ";
            cin >> radius;
            this->radius = radius;
        }

        virtual double getArea()
        {
            return 3.14 * radius * radius;
        }
    };
    class Rectangle : public Circle
    {
    public:
        int b;
        double getArea() override
        {
            cout<<"\nEnter the breadth- ";
            cin>>b;
            cout<<"Area of rectangle- "; 
            return (radius * b);
        }
    };
    class box : public Rectangle
    {
    public:
        int h;
        double getVolume()
        {
            cout<<"Enter the height- ";
            cin>>h;
            cout<<"Volume of cube- "; 
            return radius * b * h;
        }
};
int main()
{
    box r;
    int c;
    r.setRadius();
    cout<<"Area of Circle- " << r.Circle::getArea();
    cout<<r.Rectangle::getArea() << endl;
    cout<<r.getVolume() << endl;
    return 0;
}
