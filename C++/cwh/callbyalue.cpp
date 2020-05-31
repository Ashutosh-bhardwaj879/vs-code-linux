//call by value
#include <iostream>
#include <iomanip>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "The value after " << a << " and " << b << endl;
}
int main()
{
    int p, q;
    cout << "Enter the value of integers" << endl;
    cin >> p >> q;
    cout << endl;
    cout << "The value before " << p << " and " << q << endl;
    swap(p, q);
    //cout << "The value after " << p << " and " << q << endl;
    return 0;
}