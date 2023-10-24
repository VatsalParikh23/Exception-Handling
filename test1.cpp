#include<iostream>
using namespace std;
int main()
{
	int x,y,z,denomenator;
	cout<<"Enter numarator"<<endl;
	cin>>x;
	cout<<"Enter denomenator"<<endl;
	cin>>y;
	try{
	 if(y==0)
	 throw("divison by zero is not possible");
	z=x/y;
	cout<<z;}
	
	
	catch(const char*message)
	{
		cout<<message;
	}

	return 0;
}
