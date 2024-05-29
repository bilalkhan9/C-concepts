#include<iostream>
using namespace std;

class Ractangle
{
 public :
  		 int area(int L , int B)
		   {
		     return L*B;	  			
	       }
		   	  
};

int main()
{
  Ractangle r1 , r2;
  
  cout<<"Area of r1: "<<r1.area(2,3)<<endl;
  cout<<"Area of r2: "<<r2.area(5,6)<<endl;
  
  system("pause"); 	
}
