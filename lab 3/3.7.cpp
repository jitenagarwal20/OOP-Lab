#include <iostream>
using namespace std;
int main()
{
    int i, j, n, sum = 0;
    cout << "Enter the total number of terms:";
    cin >> n;
    cout<<"the series is:"<<endl;
    for (i=1;i<=n;i++) {
        if(i==1){
            cout<<"(";
		}else{
            cout<<"+(";
        }
        for (j=1;j<=i;j++){
			sum += j;
            cout << j;
            if (j < i){
                cout << "+";
            }
        }
        cout<<")";
    }
    cout << "\nThe sum of the above series is " << sum << endl;
}
