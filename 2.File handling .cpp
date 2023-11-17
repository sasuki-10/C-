#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ofstream fout;
	fout.open("country");
	
	fout<<"United States Of America\n";
	fout<<"\n United Kingdom";
	fout<<"\n South Korea";
	
	fout.close();
	
	fout.open("capital");
	fout<<"Washington\n";
	fout<<"\n London";
	fout<<"\n Seoul";
	
    fout.close();
    
    const int N=80;
    char line[N];
    
    ifstream fin;
    fin.open("country");
    
    cout<<"contents of country:\n";
    
      while(fin)
       {
    	fin.getline(line,N);
    	cout<<line;
    	
	}
	
	fin.close();
	fin.open("capital");
	
	cout<<"\n Contents of capital file";
	
	while(fin)
	{
		fin.getline(line,N);
		cout<<line;
		
		
	}
	fin.close();
	return 0;
	
}
