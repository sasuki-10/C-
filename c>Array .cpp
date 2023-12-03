#include<iostream>
using namespace std;
int main()
{
  int a[100],i;
  int n,sum=0;
    
	 cout<<"enter the number:";
         cin>>n;
         
	 if(n<100)
          {
          for(i=0;i<=n;i++)
            { 
            cout<<"a[%d]= "<<i;
            cin>>a[i];
            sum=sum+i;
            }
          }
         else
          {
          cout<<"out of array";
          }
    
     cout<<"sum is:"<<sum<<endl;
     return 0;
}
