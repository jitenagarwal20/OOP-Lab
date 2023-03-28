#include <iostream>
#include <string>
using namespace std;
class A
{
private:
    int l;
    string c;
public:
    A(string a)
    {
        c=a;
        int count=0;
        for(int i=0;a[i]!='\0';i++){
        	count++;
		}
		l=count;
    }
    void display()
    {
        cout << "the string is: " << c << " and its length is " << l << endl;
    }
    void join(A a)
    {
        cout << "the concatenated string is:" <<c.append(a.c);
    }
};
int main()
{
    A a("hello");
    a.display();
    A b(" world");
    b.display();
    a.join(b);
    return 0;
}
