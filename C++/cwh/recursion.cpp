//Fibonacci Series
#include<iostream>
#include<iomanip>
using namespace std;

int fib(int n)
{
    if(n==0||n==1)
      return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"Enter the value of position"<<endl;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}