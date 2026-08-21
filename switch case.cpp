#include <iostream>
using namespace std;
main()
{
	int  remainder, date;
	cout<<"Enter the date : ";
	cin>>date;
	if (date<=31)
	{
	remainder=date%7;
	switch(remainder)
	{
	
	case 0:
		{
		cout<<"On this date the day will be Sunday ";
		break;
		}
	case 1:
		{
		cout<<"On this date the day will be Monday ";
		break;
	}
	case 2:
		{
		cout<<"On this date the day will be Tuesday ";
		break;
	}
	case 3:
		{
		cout<<"On this date the day will be Wednesday ";
		break;
		}
		
	case 4:
		{
		cout<<"On this date the day will be Thursday ";
		break;
	}
	case 5:
		{
		cout<<"On this date the day will be Friday ";
		break;
	}
	case 6:
		{
		cout<<"On this date the day will be saturday ";
		break;
}
}
}
   else 
   cout<<"invalid input";
   
}
