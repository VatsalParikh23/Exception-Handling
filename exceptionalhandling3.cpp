#include<iostream>
using namespace std;
int main()
{
	int x,y,z,denomenator;
	cout<<"Enter your age"<<endl;
	cin>>x;
	try{
	 if(x<16){
	 
	 throw("no");}
	 else if(x>=16 && x<=18)
	 {
	 	throw(x);
	 }
	 cout<<"yes";
	}
	catch(const char*message)
	{
		cout<<message;
	}
	catch(int message)
	{
		cout<<message;
	}
	
	

	return 0;
}
