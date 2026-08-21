#include <iostream>
using namespace std;
int main()
{
	float calories, fats, Calories_from_fat, Percentage, total_calories; 
	cout<<"Enter the number of calories and fat grams in a food : ";
    cin>>calories>>fats;
    Calories_from_fat = fats * 9;
	total_calories=Calories_from_fat+calories;
	Percentage=Calories_from_fat/total_calories;
	if (fats<0,calories<0,calories<=total_calories)
	cout<<"Invalid input";
	else 
	cout<<"The percentage of calories that comes from fat is "<<Percentage;
	if (Calories_from_fat< total_calories)
	Percentage=30;
	cout<<"Food is low in fat";
}
