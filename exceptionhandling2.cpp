#include<iostream>
using namespace std;
int main()
{
	int x,y,z,denomenator;
	cout<<"Enter your age"<<endl;
	cin>>x;
	try{
	 if(x<18)
	 throw("you can not open the account");
	 cout<<"MOve to next page";
	}
	catch(const char*message)
	{
		cout<<message;
	}
	

	return 0;
}
