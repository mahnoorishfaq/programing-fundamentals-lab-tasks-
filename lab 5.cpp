#include <iostream>
#include <math.h>
using namespace std;
main()
{
/*bool trueValue,falseValue; 
int x=5,y=10; 
trueValue=x<y; 
falseValue=x>y; 
cout<<"True is "<<trueValue<<endl; 
cout<<"False is "<<falseValue;*/ 


/*
int x=5,y=10; 
cout<<"X is "<<x<<" and Y is "<<y<<endl; 
if (x>y); // terminate it 
cout<<"X is greater than y"; */
 
// (X>Y)? cout<<"x is greater than y" :cout<<"x is less than y"; ( THIS IS ALTERNATE OF IF CONDITION, '?' USE INSTEAD OF IF AND IF STATEMENT TRUE THAN BEFORE COLON WILL BE OUTPUT OTHERWISE OUTPUT IS AFTER COLON) 
/*
int x; 
cout<<"Enter a number : "; 
cin>>x; 
if (x%2==0) 
cout<<x<<" is even"; 
else 
cout<<x<<" is odd";
*/


/*int month, day, year;
cout<<"enter a month in numeric form : ";
cin>>month;
cout<<"enter a day in numeric form : ";
cin>>day;
cout<<"enter a year in numeric form : ";
cin>>month;
if (month*day==year)
cout<<"Date is magic";
else
cout<<"Date isn't magic";*/


/*
float BMI, weight, height;
cout<<"Weight is measured in pounds : ";
cin>>weight;
cout<<"Height is measured in inches : ";
cin>>height;
BMI=(weight*703)/(pow(height,2));
cout<<"BMI is : "<<BMI<<endl;
if (BMI >= 18.5 && BMI<=25)
cout<<" Your weight is optimal : ";
else if (BMI<18.5)
cout<<" You are underweight : ";
else if (BMI>25)
cout<<"You are overweight";
*/


float mass, weight;
cout<<"Enter an object's mass : ";
cin>>mass;
weight = mass * 9.8;
cout<<"The weight of object is "<<weight<<"newton".<<endl;
if (weight>1000)
cout<<"It's too heavy.";
else if (weight<1000)
cout<<"It's too light"; 

}

