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
            cout<<"Area of Circle- ";
            return 3.14 * radius * radius;
        }
    };
    class Rectangle : public Circle
    {
    public:
        int b;
        double getArea()
        {
            cout<<"\nEnter the breadth- ";
            cin>>b;
            cout<<"Area of Rectangle- ";
            return (radius * b);
        }
    };
    class cylinder: public Circle
    {
        public:
        int h;
        float getVolume()
        {
            cout<<"\nEnter the height of the cylinder- ";
            cin>>h;
            cout<<"Volume of the Cylinder- ";
            return 3.14*radius*radius*h;
        }
};
int main()
{
    Rectangle r;
    r.setRadius();
    cout<< r.Circle::getArea();
    cout<< r.getArea()<<endl;
	cylinder c;
	c.setRadius();
	cout<< c.Circle::getArea();
	cout<<c.getVolume();
    return 0;
}
