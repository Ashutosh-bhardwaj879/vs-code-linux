#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Tell your age"<<endl;
  cin>>age;

  switch (age)
  {
  case 18:
    cout<<"You are 18"<<endl; 
    break;
  case 22:
    cout<<"YOU ARE 22"<<endl;
    break;
  
  default:
    cout<<"YOU SUCK"<<endl;
    break;
  }
}