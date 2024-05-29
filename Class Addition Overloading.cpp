#include<iostream>
using namespace std;

void add(int a , int b , int c=0)
{
 cout<<"Sum = "<<(a+b+c); 	 
}
void add(double a , double b , double c=0)
{
 	  	 cout<<endl<<"Sum = "<<(a+b+c)<<endl;;
}
int main()
{
 	add(10,2);
 	add(5.3,6.2);
 	
 	system ("pause");
}
