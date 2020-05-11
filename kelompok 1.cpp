#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if ( n>80)
	{
		cout<<"index A";
	}else if (n<80 && n>70)
	{
		cout<<"index B ";
	} else {
		cout<<"index C ";
	}
}
