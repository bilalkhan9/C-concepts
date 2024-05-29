#include<iostream>
using namespace std;
class Maximum
{
  public :
  		 template<class T>
  		 T maxx(T a , T b)
		   {
		   	 return a>b ? a : b;	 		 
	       } 	  
};

int main()
{
  Maximum m;
  cout<<"Maximum = "<<m.maxx<char>('a','c')<<endl;
  system ("pause");
  return 0; 	
}
