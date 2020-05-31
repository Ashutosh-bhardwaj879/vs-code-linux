#include<iostream>
#include<iomanip>
using namespace std;

inline int product( int a , int b)
{
 return a*b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"The product is "<<product(a,b)<<endl;
    return 0;
}