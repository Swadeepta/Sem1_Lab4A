#include <iostream>
using namespace std;

/*PROGRAM TO CUBE OF ANY NUMBER USING FUNCTION*/
float cube(float a)
{
  float cub=a*a*a;
  return cub;
}
int main()
{
  cout<<"PROGRAM TO CUBE OF ANY NUMBER USING FUNCTION";
  float num;
  cout<<"\n Enter a number: ";
  cin>>num;
  float cube1=cube(num);
  cout<<"\n The cube of the number is: "<<cube1;
  return 0;
}