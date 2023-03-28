#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,size,flag=1;
    cout<<"Enter size of square matrix:";
    cin>>size;
    int a[size][size],temp[size][size],check[size][size],sum=0;
    cout<<"Enter Elements in matrix:";
    for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++){
            	cout<<"a["<<i<<"]["<<j<<"]:";
                cin>>a[i][j];
            }
        }
    printf("\nthe entered matrix is:\n");
    for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++){
            	cout<<a[i][j]<<"\t";
                temp[i][j]=a[j][i];
            }
            cout<<endl;
        }
    for(i=0;i<size;i++)
        {
        for(j=0;j<size;j++)
            {
            for(k=0;k<size;k++)
                {
                    sum+=(a[i][k]*temp[k][j]);
                }
            check[i][j]=sum;
            sum=0;
            }
        }
    for(i=0;i<size;i++)
        {
        for(j=0;j<size;j++)
            {
                if(i==j && check[i][j]!=1)
                    flag=0;
                if(i!=j && check[i][j]!=0)
                    flag=0;
            }
        }
    if(flag==1)
        printf("Given Matrix is Orthogonal Matrix\n"); 
    else
        printf("Given Matrix is not an Orthogonal Matrix\n");
    return 0;
}
