//Function Overloading
#include<iostream>
#include<iomanip>
using namespace std;

int area(int a,int b)
{
  return a*b;
}
int volume(int a,int b,int c)
{
  return a*b*c;
}
int volume(int a,int b)
{
    return 3.14*a*a*b;       
}
int volume(int a)
{
    return a*a*a;
}
int main()
{
    int a,b,c;
    cout<<"Enter the value of a,b,c "<<endl;
    cin>>a>>b>>c;
    cout<<"VOLUME OF CUBE "<<volume(a)<<endl;
    cout<<"VOLUME OF CYLINDER "<<volume(a,b)<<endl;
    cout<<"VOLUME OF CUBOID "<<volume(a,b,c)<<endl;
    cout<<"AREA OF RECTANGLE "<<area(a,b)<<endl;
    return 0;
}