#include<iostream>
using namespace std;

int main ()
{
	float a;
	cin>>a;
	
	if(a<=50)
	{
		cout<<a* 0.05;
	}else if(a<=250)
	{
		cout<< a* 0.15;
	}else if (a<=500){
		
		cout<<a*0.25;
	}else{
		
		cout<<a* 0.3;
	}
}
