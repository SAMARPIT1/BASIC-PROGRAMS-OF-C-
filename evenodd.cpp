#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
  int no;
  cout << "Enter any number: ";
  cin >> no;
  if(no%2==0)
  {
    cout<<"Even number";
  }
  else
  {
    cout<<"Odd number";
  }
  return 0;
}
 
