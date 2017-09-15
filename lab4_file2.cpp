
#include <iostream>
using namespace std;

/*C++ program to accept radius of a circle and find diameter, perimeter and area using functions*/

void circle_operations()
{ 
  float rad=0;
  float d, ar, per;
  cout<<"****CIRCLE OPERATIONS****";
  cout<<"\n \tEnter the Radius of the circle: ";
  cin>>rad;
  d=2*rad;
  per=2*rad*((double)22/7);
  ar=((double)22/7)*rad*rad;
  cout<<"\n \tThe diameter of the circle is: "<<d;
  cout<<"\n \tThe perimeter of the circle is: "<<per; 
  cout<<"\n \tThe area of the circle is: "<<ar;   
}
int main()
{
  circle_operations();
  return 0; 
}
