//write include statements
#include "repetition.h"
#include <string>
//write using statements
using std::cout; using std::cin;
using std::string;
int main() 
{
	int choice,num1,num2;
	string confirm;
	do
	{
		cout<<"	Main Menu"<<"\n\n"<<"1-Factorial"<<"\n"<<"2-Greatest Common Divisor"<<"\n"<<"3-Exit "<<"\n";
		cin>>choice;
		switch (choice)
		{
			case 1:
			cout<<"Input Value you want a Factorial Of: ";
			cin>>num1;
			cout<<"The factorial of "<<num1<<" is "<<factorial(num1)<<"\n";break;

			case 2:
			cout<<"Input the first value you want the greatest common denominator of: ";
			cin>>num1;
			cout<<"Input the second value you want the greatest common denominator of: ";
			cin>>num2;
			cout<<"The gcd of "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2)<<"\n";break;

			case 3:
			cout<<"Are you sure you want to exit?(y/n): ";
			cin>>confirm;
			if (confirm=="y" or confirm=="Y")
			{
				cout<<"Have a good day!";
			}
			else if (confirm=="n" or confirm=="N")
			{
				choice = 0;
			}
			break;

			default: 
			cout<<"Invalid Menu Choice Please Re-Enter\n";break;
		}
	} while (choice!=3);
	
	
	return 0;
}
