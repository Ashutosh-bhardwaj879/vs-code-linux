#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=3;
    int* b = &a;
    cout<<"The adderss of a is "<<&a<<endl;
    cout<<"The adderss of b is "<<b<<endl;
    cout<<"The adderss of b is "<<&b<<endl;

    int **c;
    c = &b;
    cout<<"The address of pointer b is "<<&b<<endl;//address of b
    cout<<"The address of pointer b is "<<c<<endl;//address of b
    cout<<"The address of pointer b is "<<**c<<endl;//value of a
    cout<<"The address of pointer b is "<<*c<<endl;//adderess of a
    return 0;
}