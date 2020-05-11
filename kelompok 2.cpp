#include<iostream>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	
	if(n<=10)
	{
		cout<<"Troposper";
	}else if(n>10 && n<=30)
	{
		cout<<"Stratosphere";
	}else if(n>30 && n<=50)
	{
		cout<<"mesosphere";
	}else if(n>50 && n<=400)
	{
		cout<<"thermosphere";
	}else{
		cout<<"exosphere";
	}
}
