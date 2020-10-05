#include <iostream>
using namespace std;
int main()
{
  string telphone;
  cout<<"Enter the telephone number: ";
  cin>>telphone;
  cout<<"The formatted phone number is "<<"("<<telphone.substr(0,3)<<") "<<telphone.substr(3,4)<<" "<<telphone.substr(7,4);
  return 0;
}
