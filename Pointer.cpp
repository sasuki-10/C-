#include<iostream>
using namespace std;
void main()
{
 int a,*ptr1,**ptr2;
	clrscr();
	ptr1=&a;
	ptr2=&ptr1;
	
	cout<<"THE ADDRESS OF a:"<<ptr1<<"\n";
	cout<<"THE ADDRESS OF ptr1:"<<ptr2;
	cout<<"\n\n";
	cout<<"AFTER INCREMENTING THE ADDRESS VALUE:\n\n";
         
	ptr1+=2;
	cout<<"THE ADDRESS OF a:"<<ptr1<<"\n";
	
	ptr2+=2;
	cout<<"THE ADDRESS OF ptr1:"<<ptr2<<"\n";
}
