#include <iostream>
using namespace std;

class Number
{
    int a;
public:
    static int ipcount;
    static int opcount;
    void input()
    {
        cin >> a;
        ipcount++;
    }
    void output()
    {
        cout << a;
        opcount++;
    }
};
int Number::ipcount = 0;
int Number::opcount = 0;
int main()
{
    int n;
    class Number num;
    cout << "Enter the no. of times you want to call input and output: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the number: ";
        num.input();
        cout << "\n"<< "Output: ";
        num.output();
    }
    cout<<"\nNo. of times input and output are called: "<<num.ipcount<<", "<<num.opcount;
}
