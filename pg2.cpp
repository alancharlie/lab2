#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int number1, number2;
  double sum;
  
  cout<<"Please enter two numbers: ";
  cin>> number1 >> number2;
  sum=number1+number2;
  cout<<"The sum of "<<number1<<" and "<<number2<<" is: "<<sum<<endl;
  cout<<"The difference between "<<number1<<" and "<<number2<<" is "<<number1-number2<<endl;
  cout<<"The product of "<<number1<<" and "<<number2<<" is "<<number1*number2<<endl;
  cout<<"The distance between "<<number1<<" and "<<number2<<" is "<<abs(number1-number2)<<endl;
  cout<<"The average of "<<number1<<" and "<<number2<<" is "<<sum/2<<endl;
  return 0;
						  
  
  
}
  
