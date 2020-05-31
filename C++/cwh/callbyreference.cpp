//call by reference
#include<iostream>
#include<iomanip>
using namespace std;

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    int *p,*q;
    cout<<"Enter the first value "<<endl;
    cin>>a;
    cout<<"Enter second value "<<endl;
    cin>>b;
    p = &a;
    q = &b;
    cout<<"The value before "<<a<<" and "<<b<<endl;
    swap(&a,&b);
    cout<<"The value after "<<a<<" and "<<b<<endl;
    return 0;
}
