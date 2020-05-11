#include<iostream>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	
	if(n<=39){
		cout<<"tidak wajib zakat";
	}else if(n<=120)
	{
		cout<<"1  kambing";
	}else if( n<=200)
	{
		cout<<"2 ekor kambing";
	}else if(n<=399)
	{
		cout<<"3 ekor kambing";
	}else if(n<=499)
	{
		cout<<"4 ekor kambing";
	}else if(n<=599)
	{
		cout<<"5 ekor kambing";
	}else{
		cout<<n/100<<" ekor kambing";
	}
}
