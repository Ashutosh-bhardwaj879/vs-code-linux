#include<iostream>
#include<iomanip>
using namespace std;

typedef struct employee
{
    int ID;
    char favChar;
    float salary;
}ep;

int main()
{
    struct employee harry;
    ep shubham;
    harry.ID = 19114;
    harry.favChar = 'c';
    harry.salary = 120000;
    shubham.salary = 1200;
    cout<<harry.ID<<endl;
    cout<<harry.favChar<<endl;
    cout<<harry.salary<<endl;
    cout<<shubham.salary<<endl;
    return 0;
}