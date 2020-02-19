#include<iostream>
using namespace std;

void selec_sort(int arr[],int n)
{
    int small,pos,j;
    for(int i=0;i<n-1;i++)
    {
         small = arr[i];
         pos = i;
        for( j=i+1;j<n;j++)
        {
            if(arr[j]<small)
            {
                small = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
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
    selec_sort(arr,n);
    cout<<"Sorted array is"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i] <<endl;
    return 0;
}
