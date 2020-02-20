#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

void sort(int arr[],int n)
{
	int i,j,small,pos,temp;
	for(i=0;i<n-1;i++)
	{
		small = arr[i];
		pos = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<small)
				{
					small = arr[j];
					pos = j;
				}
		}
		temp = arr[pos];
		arr[pos] = arr[i];
		arr[i] = temp;
	}
}
int main()
{
	int n,i;

	cout<<"Enter no of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array"<<endl;

	for(i=0;i<n;i++)
		cin>>arr[i];
		
    auto start = chrono::steady_clock::now();

	sort(arr,n);
	auto end = chrono::steady_clock::now();
    auto diff = end - start;

	cout<<"Sorted array is"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" "<<endl;
	cout << chrono::duration <double, milli> (diff).count() << " mili s" << endl;
	
	return 0;
}




/*
Enter no of elements
10
Enter elements in array
2 4 7 12 0 67 3 4 23 67
Sorted array is
0 
2 
3 
4 
4 
7 
12 
23 
67 
67 
0.001408 mili s
*/
