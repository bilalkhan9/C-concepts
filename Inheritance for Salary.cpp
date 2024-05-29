#include<iostream>
using namespace std;
class person
{
  protected :
  			char pname[50],adress[100];
			  long long phone_no; 	  
};

class Employee : public person
{
  public :
  		 int eno;
		   char ename[50]; 	  
};

class Manager : public Employee
{
  public :
  		 char designation[50],deptname[100];
  	     float basic_salary;
  	     public :
		 		void accept_detail()
		 		{
				  cout<<"\n Enter Details of Manager ";
				  cout<<"\n ------------------------- ";
				  cout<<"\n Enter Employee No  ";
				  cin>>eno;
				  cout<<"\n Enter Name ";
				  cin>>ename;
				  cout<<"\n Enter Adress ";
				  cin>>adress;
				  cout<<"\n Enter phone Number ";
				  cin>>phone_no;
				  cout<<"\n Enter Designation ";
				  cin>>designation;
				  cout<<"\n Enter Departmen Name ";
				  cin>>deptname;
				  cout<<"\n Enter Basic Salary";
				  cin>>basic_salary; 	 
			    }
};

int main()
{
 int i,cnt,temp;
 Manager man[100];
 cout<<"\n How many Managers You Want to Enter ? ";
 cin>>cnt;
 for(i=1;i<=cnt;i++)
 {
   man[i].accept_detail(); 					
 } 	
 temp=0;
 for(i=1;i<=cnt;i++)
 {
   if(man[temp].basic_salary<man[i].basic_salary)
   temp=i;
   
 }
 cout<<"\n Manager with Highest Salary is : "<<man[temp].basic_salary;
 cout<<"\n And Manager Name Is : "<<man[temp].ename;
 system("pause");
 return 0;
}
