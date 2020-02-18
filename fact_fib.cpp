#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int fibonacci(int n)
{
    if(n==1)
        return 0;
     if(n==2)
        return 1;
    else
        return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int n,option,f,fib;
    cout<<"1. Factorial\n2. Fibonacci\n3. Exit"<<endl;
    cout<<"Enter option"<<endl;
    cin>>option;
    while(option !=3)
    {
        switch(option)
        {
            case 1: cout<<"Enter number"<<endl;
                    cin>>n;
                     f = fact(n);
                    cout<<"Factorial is :   "<<f<<endl;
                    break;
            case 2: cout<<"Enter number"<<endl;
                    cin>>n;
                     fib = fibonacci(n);
                    cout<<n<<" fibonacci number is  :   "<<fib<<endl;
                    break;
        }
        cout<<"Enter option"<<endl;
    cin>>option;
    }
    return 0;
}
