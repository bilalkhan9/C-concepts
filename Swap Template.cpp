#include<iostream>
using namespace std;

class Swap
{
 	  public :
	  		 template<class T>
	  		 void swap(T a , T b)
			   {
			   	 T temp=a;
					a=b;
					b=temp;
					cout<<"a = "<<a<<" b = "<<b<<endl;	  		   
               } 	  
};

int main()
{
  Swap s;
  s.swap<int>(5,6);
  s.swap<char>('s','b');
  system("pause"); 	
}
