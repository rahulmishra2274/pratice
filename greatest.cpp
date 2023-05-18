#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
	cout<<"enter three number";
	cin>>n1>>n2>>n3;
	
	if(n1>=n2 && n1>=n3)
	{
		cout<<"greatest number"<<n1;
	}
	if(n2>=n1 && n2>=n3)
	{
		cout<<"greatest number"<<n2;
	}
	if(n3>=n1 && n3>=n2)
	{
		cout<<"greatest number"<<n3;
	}
	return 0;
}
