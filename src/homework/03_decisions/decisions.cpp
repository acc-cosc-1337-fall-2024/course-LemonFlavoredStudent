//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string letter_grade = "";

    if (grade <= 100 && grade >= 90)
    {
        letter_grade = "A";
    }
    else if (grade <= 89 && grade >= 80)
    {
        letter_grade = "B";
    }
    else if (grade <= 79 && grade >= 70)
    {
        letter_grade = "C";
    }
    else if (grade <= 69 && grade >= 60)
    {
        letter_grade = "D";
    }
    else if (grade <= 59 && grade >= 0)
    {
        letter_grade = "F";
    }
    else
    {
        letter_grade = "Invalid Value";
    }
    return letter_grade;
}