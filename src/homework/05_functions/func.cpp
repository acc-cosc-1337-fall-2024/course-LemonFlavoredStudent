//add include statements
#include "func.h"
//add function code here
double get_gc_content(const string& dna)
{
    double amount = 0;
    char checkCharacter1 = 'C';
    char checkCharacter2 = 'G';
    for (int i = 0; i<dna.size(); i++)
    {
        if (dna[i] == checkCharacter1 or dna[i] == checkCharacter2)
        {
            amount++;
        }

    }
    return amount/dna.size();
}

string reverse_string(string dna)
{
    string tempString=dna;
    for (int i = dna.size()-1; i >= 0; i--)
    {
        tempString[dna.size()-(i+1)] = dna[i];
    }
    dna = tempString;
    return dna;
}