#include<iostream>
using namespace std;
int main(){
    int i, j,n,flag=0;
    cout<< "Enter the order of square matrix:";
    cin>>n;
    int arr[n][n],T[n][n];
    cout << "Enter the matrix elements:\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
			cout<<"arr["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
        }
    }
    cout<<"entered matrix is:\n";
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
        	cout<<arr[i][j]<<"\t";
        	T[i][j]=arr[j][i];
        	if(T[i][j]!=arr[i][j]){
        		flag=1;
			}
        }
        cout<<endl;
    }
    if(flag==0){
        cout << "The matrix is symmetric.\n ";
    }else{
        cout << "The matrix is not symmetric.\n ";
    }
    return 0;
}
