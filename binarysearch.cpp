#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,i,j,no_of_cases,arr[50],key,l,r,m,flag=0,result[50],k=0;
	cin>>no_of_cases;
	for(i=0;i<no_of_cases;i++)
	{

		cin>>n>>key;
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		l=0;
		r=n-1;
		flag=0;
		while(l<=r)
		{
			m=(l+r)/2;
			if(arr[m]<key)
				l=m+1;
			 if(arr[m]>key)
				r=m-1;
			if(arr[m]==key)
			{
				result[i]=1;
				
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			result[i]=-1;
			
		}
	}
	for(i=0;i<no_of_cases;i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}



/*

Enter no of cases
2
Enter no of elements in array and the element to be searched
3 1
Enter elements in array
1 2 3
Enter no of elements in array and the element to be searched
4 8
Enter elements in array
1 2 3 4
1-1bmsce@bmsce-Precision-T1700:~$ 

*/
				
