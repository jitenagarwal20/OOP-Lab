#include<iostream>
using namespace std;
int main()
{
   int i, j, row, col;
   int sum = 0;
   cout<<"Enter the number of Rows: ";
   cin>>row;
   cout<<"Enter the number of Columns:";
   cin>>col;
   int matrix[row][col];
   for(i=0;i<row;i++) {
    	for (j=0;j<col;j++){
        	cout<<"Enter the Element a["<<i<<"]["<<j<<"]:";
        	cin>>matrix[i][j];
      	}
   }
   for (i=0;i<row;i++){
		for (j=0;j<col;j++){
        	if (i == j)
        	sum = sum + matrix[i][j];
    	}
	}
   cout<<"Addition of Diagonal Array Elements in the Matrix is:"<<sum;
	return 0;
}
