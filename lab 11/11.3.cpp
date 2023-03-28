#include <iostream>
using namespace std;
void fun(int x)
{
    if (x == 0)
        throw 20;
    if (x == 1)
        throw 'A';
    if (x == 2)
        throw 2.0;
    if (x == 3)
        throw 3.148686764;
};
int main()
{
    for (int i = 0; i <= 3; i++)
    {
        try
        {

            fun(i);
        }
        catch (int x)
        {
            cout << "This is Integer type catch block."<<endl;
        }
        catch (char x)
        {
            cout << "This is Character type catch block."<<endl;
        }
        catch (float x)
        {
            cout << "This is Float type catch block."<<endl;
        }
        catch (...)
        {
            cout << " This is a catch all statement."<<endl;
        }
    }
    cout << endl;
    return 0;
}
