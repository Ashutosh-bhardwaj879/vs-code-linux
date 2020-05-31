#include <iostream>
#include <iomanip>
using namespace std;

int money(int amt, float interest = 1.06)
{
    return amt * interest;
}
int main()
{
    int amt;
    cout << "Enter the amount" << endl;
    cin >> amt;
    cout << "Money Received     " << money(amt) << endl;
    cout << endl;
    cout << "Money VIP Received " << money(amt, 1.10) << endl;
    return 0;
}