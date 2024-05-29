#include<iostream>
using namespace std;

class animal
{
 public :
 		void sound()
		 {
		  cout<<"Animal Sound : "<<endl; 	 
         } 	  
};

class dog : public  animal
{
  public :
  		 void sound()
		   {
		     cout<<"bark! "<<endl;	  		 
           } 	  
};


int main()
{
 	dog d;
 	d.sound();
 	system ("pause");
 return 0; 	
}
