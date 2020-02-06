#include<iostream>
using namespace std;
void tower(int x,char src,char temp,char dest)
{
	if(x==1)
	{
		cout<<"move disc : "<<x<<" from "<<src<<"to"<<dest<<endl;
		return;
	}
	tower(x-1,src,dest,temp);
	cout<<"move disc : "<<x<<" from "<<src<<"to"<<dest<<endl;
	tower(x-1,temp,src,dest);
}
int main()
{
	int x;
	char source,destination,temporary;
	cout<<"Enter no of disc"<<endl;
	cin>>x;
	tower(x,'A','B','C');
	return 0;
}
