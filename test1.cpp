#include<iostream>
using namespace std;

class base
{
	public:
		
		void eat()
		{
	     cout<<"\n\nI can eat";
	     
		};
		
		void sleep()
		{
	     cout<<"\nI can sleep";
		};
};


 class derive:public base
 {
	public:
       void work()
		{
		cout<<"\nI can program";
		} 	
};



int main()

{
	derive dr;
	string s;
	
	cout<<"Enter...  ";
	cin>>s;
	
	if(s=="human")
	{
		dr.eat();
		dr.sleep();  
	}
	if(s=="it")
	{
		dr.eat();
		dr.sleep();
		dr.work();
	}
	else
	{
		cout<<"Something went wrong";
	}
	
return 0;	
}
