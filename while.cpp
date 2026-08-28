#include <iostream> 
using namespace std; 
main()
{ 
   int number, digit, sum;
   cout<<"Enter any number :";
   cin>>number;
   while(number>0)
   {
   	digit=number%10;
   	number=number/10;
   	sum+=digit;
   }
   cout<<"The sum is :"<<sum<<endl;

}
