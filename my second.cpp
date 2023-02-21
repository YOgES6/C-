#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	
	ofsytream myfile("deva.txt");
	myfile("Name:P.Yogesh\nge:22\n");
	myfile.close();
	cout<<"Donw well...";
	return 0;
}
