#include <iostream>
#include <string>
using namespace std;
main()
{
/* task 6
	int seatA=2000 , seatB=1000, seatC=500, a, b, c, total;
	cout<<"price of seatA = "<<seatA<<endl;
	cout<<"price of seatB = "<<seatB<<endl;
	cout<<"price of seatC = "<<seatC<<endl;
	cout<<"tickets sold for class a ="<<endl;
	cin>>a;
	cout<<"ticket sold for class b ="<<endl;
	cin>>b;
	cout<<"ticket sold for class c ="<<endl;
	cin>>c;
	total=(a*seatA)+(b*seatB)+(c*seatC);
	cout<<"total seats = "<<total<<endl;
	return 0; */
/* task 7
	float a, b, c, average;
	string name_1, name_2, name_3;
	cout<<"Enter the name of first month :";
	cin>>name_1;
	cout<<"Enter the ammount of rain for "<<name_1<< " in millimeters : ";
	cin>>a;
	cout<<"Enter the name of second month :";
	cin>>name_2;
	cout<<"Enter the ammount of rain for "<<name_2<< " in millimeters : ";
	cin>>b;
	cout<<"Enter the name of third month :";
	cin>>name_3;
	cout<<"Enter the ammount of rain for "<<name_3<< " in millimeters : ";
	cin>>c;
	average = (a+b+c)/3;
	cout<<"The average rain for "<<name_1<<" , "<<name_2<<" and "<<name_3<<" is "<<average;
	return 0; */
	string movie_name;
	int adult_ticket, child_ticket, senior_ticket;
	float adult_price=500, child_price=250, senior_price, senior_discount_price, senior_discount=0.1, distributor_profit, distributor_share=0.8, gross_profit, net_profit;
	cout<<"Enter the name of movie : ";
	cin>>movie_name;
	cout<<"Enter the name of adult ticket sold : ";
	cin>>adult_ticket;
	cout<<"Enter the name of child ticket sold : ";
	cin>>child_ticket;
	cout<<"Enter the name of senior ticket sold : ";
	cin>>senior_ticket;
	gross_profit=(adult_ticket*adult_price)+(child_ticket*child_price);
	senior_price=adult_price*(1-senior_discount);
	senior_discount_price=senior_ticket*senior_price;
	gross_profit+= senior_discount_price;
	net_profit=gross_profit*distributor_share;
	distributor_profit=gross_profit-net_profit;
	cout<<"Movie Names\t"<<"\'"<<movie_name<<"\'"<<endl;
	cout<<"Adult Ticket Sold : "<<adult_ticket<<endl;
	cout<<"Adults Above 60 : "<<senior_ticket<<endl;
	cout<<"Gross Box Office Profit Rs. "<<gross_profit<<endl;
	cout<<"Net Box Office Profit Rs. "<<net_profit<<endl;
	cout<<"Ammount paid to distribitor Rs. "<<net_profit<<endl;
	return 0;
}
