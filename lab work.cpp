#include <iostream>
using namespace std;
int main()
{
/*	int A,B;//declaration of variable
	sum=0;//initialization
	cout<<"please enter value of A\t";
	cin>>A;
	cout<<"please enter value for B\t";
	cin>>B;
	sum=A+B;
	cout<<"sum\t\t\t\t";
	cout<<sum;
	return 0; 
/*	float distance,speed,time;
	cout<<"please enter value of distance in meters  ";
	cin>>distance;
	cout<<"please enter value of time in seconds\t";
	cin>>time;
	speed=distance/time;
	cout<<"The speed of vehicle is\t"<<speed<<" meter per second";*/
/*	float Force=172.5,Area=27.5,pressure;
	pressure=Area/Force;
	cout<<"The pressure is "<<pressure<<" Pascal"; */
/*	float percentage=0, sales=680;
	percentage=0.62*sales;
	cout<<"The company will generat "<<percentage<<" million"; */
	float meal_cost=4450,tip_ammount,tax_ammount,total_bill,total;
	tax_ammount=0.0675*meal_cost;
	cout<<"The ammount of tax is\t"<< tax_ammount;
	total=tax_ammount+meal_cost;
	tip_ammount=0.15*total;
	cout<<"\nThe ammount of tip is\t"<< tip_ammount;
	total_bill=tax_ammount+tip_ammount+meal_cost;
	cout<<"\nTotal ammount is\t"<< total_bill;
}
