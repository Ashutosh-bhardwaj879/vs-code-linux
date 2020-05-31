#include<iostream>
#include<iomanip>
using namespace std;

typedef union money 
{
    int rice;
    char car;
    float pound;
}M;
int main()
{
    union money m1 ;
    m1.rice = 34;
   // m1.car  = 'c';
    cout<<m1.rice<<endl;
    m1.car = 'c';
    cout<<m1.car<<endl;
    M m2;
    m2.rice = 33;
    cout<<m2.rice<<endl;
    return 0;
}