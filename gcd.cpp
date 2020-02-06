#include<iostream>
using namespace std;
int GCD(int m,int n)
{
	if(n==0)
		return m;
	else
	{
		return GCD(n,m%n);
	}
}
int main()
{
	int m,n,gcd;
	cout<<"Enter two numbers"<<endl;
	cin>>m>>n;
	gcd=GCD(m,n);
	cout<<"GCD of given numbers is: "<<gcd;
	return 0;
}
