#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	try{
		if(age <18)
		throw("underage account cannot be created");
		else
		throw("account created succesfully");
		
		
	}
	catch(const char*msg){
		cout<<msg;
	}
	 return 0;                                                                                      
}
