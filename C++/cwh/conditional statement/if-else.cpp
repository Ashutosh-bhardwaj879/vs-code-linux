#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    if(age>18)
    {
        cout<<"You can vote\n";
    }
    else if(age == 12)
    {
        cout<<"You cant vote\n";
    }
    else
    {
        cout<<"You sucks\n";
    }
    
}