#include <iostream>

using namespace std;

int main()
{
  double price,tip;
  double tip_cal=0,total=0;
  cout<<"Enter the price (pounds) ";
  cin>>price;
  cout<<"Enter the tip in percentage ";
  cin>>tip;
  tip_cal=((price/100)*tip);
  total=price+tip_cal;
  cout<<"The tip is £"<<tip_cal<<endl;
  cout<<"The total amount to pay is £"<<total<<endl;
  return 0;
  
  
}
