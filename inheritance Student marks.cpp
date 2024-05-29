#include<iostream>
#include<stdio.h>
using namespace std;

class student
{
  int roll;
  char name[25];
  
  public :
  		 void getdata()
		   {
		     cout<<"\n---------------------------\n";
			 cout<<"\n Enter Roll   :   \n";
			 cin>>roll;
			 cout<<"\n Eneter Student Name   :  ";
			 cin>>name;	  		   
		   } 	  
	    void putdata()
	    {
		  cout<<"\n-------------------------------------------------------";
		  cout<<"\n ********************Student Markliist*****************";
		  cout<<"\n Roll No       :   "<<roll;
		  cout<<"\n Student Name   :  "<<name<<endl; 
        }
};

class StudentExam : public student
{
  public :
  		 int sub1 , sub2 , sub3 , sub4 , sub5 , sub6;
  		 float per;
  		 
  public :
  		 void accept_data()
  		 {
		   getdata();
		   cout<<"\n Enter Marks For Subject 1 : ";
		   cin>>sub1;
		   cout<<"\n Enter Marks For Subject 2 : ";
		   cin>>sub2;
		   cout<<"\n Enter Marks For Subject 3 : ";
		   cin>>sub3;
		   cout<<"\n Enter Marks For Subject 4 : ";
		   cin>>sub4;
		   cout<<"\n Enter Marks For Subject 5 : ";
		   cin>>sub5;
		   cout<<"\n Enter Marks For Subject 6 : ";
		   cin>>sub6; 	  			   
         }
         
         void display_data()
         {
		   putdata();
		   cout<<"\n Marks Of Student 1   :  "<<sub1;
		   cout<<"\n Marks Of Student 2   :  "<<sub2;
		   cout<<"\n Marks Of Student 3   :  "<<sub3;
		   cout<<"\n Marks Of Student 4   :  "<<sub4;
		   cout<<"\n Marks Of Student 5   :  "<<sub5;
		   cout<<"\n Marks Of Student 6   :  "<<sub6; 	  
		 }
	   
};

class StudentResult : public StudentExam
{
  public :
  		 void calculate()
		   {
		     per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
			 cout<<"\n\n Total Percentage  :   "<<per;
			 cout<<"\n--------------------------------- \n";		 
							  
           }	  
  	   
};

int main()
{
  StudentResult str;
  int cnt , i;
  cout<<"\n Enter No. of Student You Want ? : ";
  cin>>cnt;
  for(i=0;i<cnt;i++)
  {
    str.accept_data();
	str.display_data();
	str.calculate(); 					
  }
  system("pause");
  return 0;
}
