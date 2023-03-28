#include <iostream>
using namespace std;
int main()
{
	int totalPaisa,rupees,paisa;
	cout<<"Enter total amount in paisa:";
	cin>>totalPaisa;
	rupees=totalPaisa/100;
	paisa=totalPaisa%100;
	cout<<totalPaisa<<" paisa="<<rupees<<" rupees"<<" and "<<paisa<<" paisa"<<endl;
    return 0;
}
