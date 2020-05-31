#include<iostream>
#include<iomanip>
using namespace std;

int sum(int,int);

int main()
{
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"The sum is "<<sum(a,b)<<endl;
    return 0;
}
int sum(int a,int b)
{
    int c;
    c = a+b;
    return c;
}