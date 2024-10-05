#include "func.h"
using std::cout; using std::cin;
int main() 
{
	int choice;
	string dna,confirm;
	do
	{
		cout<<"	Main Menu"<<"\n\n"<<"1-Get GC Content "<<"\n"<<"2-Get DNA Compliment "<<"\n"<<"3-Exit "<<"\n";
		cin>>choice;
		switch (choice)
		{
			case 1:
			cout<<"Input DNA Sequence for GC Content ";
			cin>>dna;
			cout<<"The GC Content of "<<dna<<" is "<<get_gc_content(dna)*100<<"%\n";break;

			case 2:
			cout<<"Input DNA Sequence for DNA Compliment ";
			cin>>dna;
			cout<<"The DNA Compliment of "<<dna<<" is "<<get_dna_compliment(dna)<<"\n";break;

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
