#include<iostream>
using namespace std;

int main()
{
    int n,i,k,j,temp;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter number of largest elements to be required"<<endl;
    cin>>k;
    if(k>n)
        cout<<"Not possible"<<endl;
    else
    {
        for(i=0;i<k;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        cout<<k<<" largest elements are"<<endl;
        for(i=n-1;i>=(n-k);i--)
            cout<<arr[i] <<endl;
    }
    return 0;
}
