#include<iostream>
using namespace std;
#include<fstream>

int main()
{
  const int SIZE =80;
  char line[SIZE];
  
  ifstream fin1,fin2;
  fin1.open("country");
  fin2.open("capital");
  
  for(int i=1;i<=10;i++)
  {
  	
	  if(fin1.eof()!=0)
  	    {
  	  	cout<<"Exit From Country";
  	  	exit(1);
	    }
	
	  fin1.getline(line ,SIZE);
	  cout<<"Capital of"<<line;
	
	    if(fin2.eof()!=0)
    	        {
		cout<<"Exit From capital";
		exit(1);
		}	
	
	fin2.getline(line,SIZE);
	cout<<line<<"\n";
	
  }
 }
