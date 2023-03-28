#include <iostream>
using namespace std; 
int main()
{
    int i;  
    float marks[5], total=0.0, averageMarks;
    cout << "Enter marks of 5 subjects:";
    for(i=0;i<5;i++)
        {
           cin >> marks[i];
           total += marks[i]; 
        }
    averageMarks = total /5;  
    cout << "Total Marks (out of 500):" << total;  
    cout << "\nAverage Marks:" << averageMarks;  
    return 0;  
}
