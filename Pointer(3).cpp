#include<iostream>
using namespace std;
void main()
{
	int a=10,*ptr;
	ptr=&a;
	clrscr();
	cout<<"the value of a is:"<<a;
	cout<<"\n\n";
	*ptr=(*ptr)/2;
	cout<<"The value of a is:"<<(*ptr);
	cout<<"\n\n";
	
}
