//Author:
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // I. Variable declaration
string MarcusGF;
string DMVworker;
int MarcusAge;
char letterGrade;
float MarcusScore;

  // II. Prompt the user for input and get their responses
cout <<"Enter any girl name: ";
cin>> MarcusGF;

cout <<"Enter any name: ";
cin >> DMVworker;

cout <<"Enter any age over 16: ";
cin >> MarcusAge;

cout <<"Enter letter grade (B,C,D,F): ";
cin>> letterGrade;

cout <<"Enter any decimal number under 100: ";
cin>> MarcusScore;

  
  // III. Display the mad lib story
cout <<"Marcus is studying for his driver's license written test with his lady friend "<<MarcusGF<<". He has an appointment with an employee from the DMV named "<<DMVworker<<" Gomez. Marcus is "<<MarcusAge<<" years old and is scared of not passing because he is a "<<letterGrade<<" student in school. He walked out the DMV with a "<<MarcusScore<<" out of 100"; 
  return 0;
}
