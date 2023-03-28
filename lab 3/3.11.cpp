#include<iostream>
using namespace std;
int main()
{
   int i, j,n;
   int sum = 0;
   cout<<"Enter the order of square matrix: ";
   cin>>n;
   int matrix[n][n];
   for(i=0;i<n;i++) {
    	for (j=0;j<n;j++){
        	cout<<"Enter the Element a["<<i<<"]["<<j<<"]:";
        	cin>>matrix[i][j];
      	}
   }
	cout<<"\nEntered matrix is:\n";
   for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout<<matrix[i][j]<<"\t";
        	if(i!=j)
        	sum = sum + matrix[i][j];
    	}
    	cout<<endl;
	}
   cout<<"\nAddition of non-Diagonal Array Elements in the Matrix is:"<<sum;
	return 0;
}
