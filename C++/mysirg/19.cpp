#include<iostream>
#include<iomanip>
using namespace std;

class Complex
{
    private:
     int a,b;
    public:
     void set_data(int x,int y)
     {
        a = x;
        b = y;
     }
     void show_data()
     {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
     }
};
int main()
{
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
    
}