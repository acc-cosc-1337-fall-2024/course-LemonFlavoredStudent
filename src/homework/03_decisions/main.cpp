//write include statements
#include "decisions.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	int choice,grade;
	
	//Menu Display Code
	cout<<"	Main Menu"<<"\n\n"<<"1-Letter grade using if"<<"\n"<<"2-Letter grade using switch "<<"\n"<<"3-Exit "<<"\n";
	
	//Input For Main Menu
	cin>>choice;

	switch (choice)
	{
		case 1:
		cout<<"Input Grade Value: ";
		cin>>grade;
		cout<<"Your letter grade is "<< get_letter_grade_using_if(grade)<<"\n"; break;
		case 2:
		cout<<"Input Grade Value: ";
		cin>>grade;
		cout<<"Your letter grade is "<< get_letter_grade_using_switch(grade)<<"\n"; break;
		case 3:
		cout<<"Exiting Program"<<"\n"; break;
		default:
		cout<<"Invalid Menu Choice"<<"\n"; break;
	}
	return 0;
}