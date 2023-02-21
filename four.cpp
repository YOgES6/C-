#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

int main()
{
	
	string s,y;
	cout<<"Enter a url\n\n";
	cin>>s;
    ShellExecute(NULL,"OPEN",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
	return 0;
}
