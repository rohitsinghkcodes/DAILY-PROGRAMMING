/*constructor: Constructor are the special member function used for automatic initiallisation of the object of the class.
The constructor a re defined along with other member functions but the format of connstructor definatioon is different 
from other member functionThe constructor can take parameter in their paranthesis as needed but they cant have a return 
value not ever have the of the constructor have same name as class.The constriuctor are called in the program 
automatically whenever an object of the class is created*/


#include<iostream>
using namespace std;
class adder
{
    int a,b;
public:
    adder();
};
 adder::adder()
 {
     cout<<"\nEnter the marks of physics=";
     cin>>a;
     cout<<"Enter the marks of chemistry=";
     cin>>b;
     cout<<"total sum is="<<a+b;
 }

 int main()
 {
     adder m;
     adder n;

 }
