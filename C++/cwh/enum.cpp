#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    enum meal{breakfast,lunch,dinner};
    //enum num{"32","33","34"};
    meal m1 = lunch;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}