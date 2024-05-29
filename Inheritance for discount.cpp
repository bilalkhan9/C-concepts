#include<iostream>
using namespace std;
class ItemDetails
{
  public : 
  		 int item_no;
         char item_name[50];
         float item_price;
		  	  
};
class DiscountItem : public ItemDetails
{
  public :
  		 float discount_percent;
		 float discounted_price;
		 void accept_details()
		 {
		   cout<<"\n Enter Item Name : ";
		   cin>>item_name;
		   cout<<"\n Enter Item No : ";
		   cin>>item_no;
		   cout<<"\n Enter Item Price ";
		   cin>>item_price;
		   cout<<"\n Enter Discount Percent";
		   cin>>discount_percent;
		   cout<<"\n--------------------- : ";
		   discounted_price = item_price - item_price * discount_percent/100;	  
		 }
		 void display_details()
		 {
		  	  cout<<"\n Item Name "<<item_name;
			  cout<<"\n Item Number "<<item_no;
			  cout<<"\n Item Price "<<item_price;
			  cout<<"\n discount Percent "<<discount_percent;
			  cout<<"\n discount Price "<<discounted_price;
			  cout<<"\n---------------------------------\n ";
			   	  
		 }
};


int main()
{
 	int i , cnt , discount=0 , price=0;
 	DiscountItem dt[100];
 	cout<<"\n How Mnay Items You Want To Enter ? ";
 	cin>>cnt;
 	for(i=1 ; i <= cnt ; i++)
 	{
	 		dt[i].accept_details(); 		
    }
  	 for(i=1 ; i <= cnt ; i++)
 	{
	 		dt[i].display_details(); 		
    }
    for(i=1 ; i <= cnt ; i++)
 	{
	 		price = price + dt[i].item_price; 		
    }
    for(i=1 ; i <= cnt ; i++)
 	{
	 	discount = discount + dt[i].discounted_price;		
    }
    cout<<"\n Total Price  "<<price;
    cout<<"\n Total Discount "<<discount;
    cout<<"\n Total payable Price "<<price - discount;
    cout<<"\n Price Visit Again ";
    
    system("pause");
}
