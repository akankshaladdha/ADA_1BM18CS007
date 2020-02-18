#include<iostream>
using namespace std;

int lastocc(int arr[],int starti,int endi,int key)
{
    if(starti>=endi)
        return -1;
    if(arr[endi]==key)
        return endi + 1;
    else
        return lastocc(arr,0,endi - 1,key);
}

int firstocc(int arr[],int starti,int endi,int key)
{

    if(starti>=endi)
        return -1;
    if(arr[starti]==key)
        return starti + 1;
    else
        return firstocc(arr,starti + 1,endi,key);
}

int main()
{
    int n,i,key;
    cout<<"Entre no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter key element"<<endl;
    cin>>key;
    int fo = firstocc(arr,0,n-1,key);
    int lo = lastocc(arr,0,n-1,key);
    if(fo==-1 || lo==-1)
        cout<<"element not found"<<endl;
    else
    {
        cout<<"First occurence:    "<<fo<<endl;
        cout<<"Last occurence:    "<<lo<<endl;
    }
    return 0;
}
