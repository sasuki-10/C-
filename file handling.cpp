#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ofstream outf("ITEM");
	cout<<"ENTER ITEM NAME:";
	char name[50];
	cin>>name;
	
	outf<<name<<"\n";
	
	cout<<"ENTER COST OF ITEM:";
	float cost;
	cin>>cost;
	outf<<cost<<"\n";
	
	outf.close();
	
	ifstream tri("ITEM");
	tri>>name;
	tri>>cost;
	
	cout<<"\n";
	cout<<"item name is:"<<name<<"\n";
	cout<<"cost of item is:"<<cost<<"\n";
	
	tri.close();
	return 0;
	
}
