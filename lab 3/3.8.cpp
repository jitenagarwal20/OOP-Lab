#include<iostream>
using namespace std;
int main()
{
   int tot,i,sum=0;
   cout<<"Enter the Size for array:";
   cin>>tot;
   int arr[tot];
   cout<<"Enter "<<tot<<" Array Elements:";
   for(i=0; i<tot; i++)
       {
          cin>>arr[i];
          sum+=arr[i];
       }
   cout<<"Sum of elements="<<sum;
   cout<<endl;
   return 0;
}
