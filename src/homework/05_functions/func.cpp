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

string get_dna_compliment(string dna)
{
   dna = reverse_string(dna);
   for (int i = 0; i<dna.size(); i++)
   {
        if (dna[i] == 'A')
        {
            dna[i] = 'T';
        }   
        else if (dna[i] == 'T')
        {
            dna[i] = 'A';
        }
        else if (dna[i] == 'G')
        {
            dna[i] == 'C';
        }
        else if (dna[i] == 'C')
        {
            dna[i] == 'G';
        }
   }
   return dna;
    
}