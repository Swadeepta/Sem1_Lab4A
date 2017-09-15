#include <iostream>
using namespace std;

/*Program to determine whether the number is even or odd using functions.*/

int odd_even(int num)
{
  if((num%2==0))
    return 0;
  else
    return 1;
}
int main()
{
  int a=0;
  cout<<"Program to determine whether the number is even or odd.";
  cout<<"\n \t\tEnter the number ";
  cin>>a;
  int n=odd_even(a);
  if(n==0)
    cout<<"\n \t\tIt is an even number";
  else
    cout<<"\n \t\tIt is an odd number";
  return 0;
}
