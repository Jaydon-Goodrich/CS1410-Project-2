// This is my own work
// Jaydon Goodrich
/* A simple cpp project that uses vectors and arrays. This project takes that users input and stores it in a vector.
The program then runs through all the data given calculates a median and outputs a letter grade.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int score1 = 0;
int score2 = 0;
int score3 = 0;
int BIG = 10000;
int homework = 0;
int MIN = 0;
int MAX = 100;
int CANT = -1;
double median = 0.0;
double first = 0.0;
double second = 0.0;
int totalScore = 0;
vector<int> homeworkv;
unsigned int i;
string lettergrade;
int RANGE1 = 180;
int RANGE2 = 200;
int RANGE3 = 220;
int RANGE4 = 240;
int RANGE5 = 260;
int RANGE6 = 280;
int RANGE7 = 300;
int RANGE8 = 320;
int RANGE9 = 340;
int RANGE10 = 360;
int RANGE11 = 380;
int RANGE12 = 400;
int ONE = 1;
int TWO = 2;
int ZERO = 0;
string CalculateLetterGrade(int totalScore);

int FindMedianScore(vector<int> &homeworkv)
{
   // lol no magic numbers here ;)
   sort(begin(homeworkv),end(homeworkv));
   if (homeworkv.size() % TWO == ZERO){
      for (unsigned i = ZERO; i < homeworkv.size(); i++){
         while (homeworkv.size() > TWO){
            homeworkv.erase(homeworkv.begin()+i);
            homeworkv.pop_back();
         }
      }
      median = (homeworkv.at(ZERO) + homeworkv.at(ONE)) /TWO;
      
         
   
   }
   if (homeworkv.size() % TWO == ONE){
      for (unsigned i = ONE; i < homeworkv.size(); i++){
         while (homeworkv.size() > ONE){
            homeworkv.erase(homeworkv.begin()+i);
            homeworkv.pop_back();
         }
      }
      median = (homeworkv.at(ZERO));
      
   }
   
}
string CalculateLetterGrade(int totalScore)
{
   if (totalScore <= RANGE1){
      lettergrade = "fail";
   }
   else if (totalScore > RANGE1 && totalScore <= RANGE2){
      lettergrade = "D-";
   }
   else if (totalScore > RANGE2 && totalScore <= RANGE3){
      lettergrade = "D";
   }
   else if (totalScore > RANGE3 && totalScore <= RANGE4){
      lettergrade = "D+";
   }
   else if (totalScore > RANGE4 && totalScore <= RANGE5){
      lettergrade = "C-";
   }
   else if (totalScore > RANGE5 && totalScore <= RANGE6){
      lettergrade = "C";
   }
   else if (totalScore > RANGE6 && totalScore <= RANGE7){
      lettergrade = "C+";
   }
   else if (totalScore > RANGE7 && totalScore <= RANGE8){
      lettergrade = "B-";
   }
   else if (totalScore > RANGE8 && totalScore <= RANGE9){
      lettergrade = "B";
   }
   else if (totalScore > RANGE9 && totalScore <= RANGE10){
      lettergrade = "B+";
   }
   else if (totalScore > RANGE10 && totalScore <= RANGE11){
      lettergrade = "A-";
   }
   else if (totalScore > RANGE11 && totalScore <= RANGE12){
      lettergrade = "A";
   }
   return lettergrade;
}
   

int main() {
 

   cout << "Dr. DoLittle's Grading Program ....." << endl;
   cout << endl;
   
   cout << "Please enter in the score for the first exam: " << endl;
   cout << endl;
   cin >> score1;
   if (cin.fail()){
      cin.clear();
      cin.ignore(BIG,'\n');
      cout << "Sorry, your input must be an integer. Please try again." << endl;
      cout << endl;
      cout << "Please enter in the score for the first exam: " << endl;
      cout << endl;
      cin >> score1;
   }
   while (score1 < MIN || score1 > MAX){
      cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
      cout << endl;
      cout << "Please enter in the score for the first exam: " << endl;
      cout << endl;
      cin >> score1;
      if (cin.fail()){
         cin.clear();
         cin.ignore(BIG,'\n');
         cout << "Sorry, your input must be an integer. Please try again." << endl;
         cout << endl;
         cout << "Please enter in the score for the first exam: " << endl;
         cout << endl;
         cin >> score1;
      }
      
   
   }
   
   
   cout << "Please enter in the score for the second exam: " << endl;
   cout << endl;
   cin >> score2;
   if (cin.fail()){
      cin.clear();
      cin.ignore(BIG,'\n');
      cout << "Sorry, your input must be an integer. Please try again." << endl;
      cout << endl;
      cout << "Please enter in the score for the second exam: " << endl;
      cout << endl;
      cin >> score2;
   }
   while (score2 < MIN || score2 > MAX){
      cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
      cout << endl;
      cout << "Please enter in the score for the second exam: " << endl;
      cout << endl;
      cin >> score2;
      if (cin.fail()){
         cin.clear();
         cin.ignore(BIG,'\n');
         cout << "Sorry, your input must be an integer. Please try again." << endl;
         cout << endl;
         cout << "Please enter in the score for the second exam: " << endl;
         cout << endl;
         cin >> score2;
      }
      
   
   }
   
   
   
   cout << "Please enter in the score for the final exam: " << endl;
   cout << endl;
   cin >> score3;
   if (cin.fail()){
      cin.clear();
      cin.ignore(BIG,'\n');
      cout << "Sorry, your input must be an integer. Please try again." << endl;
      cout << endl;
      cout << "Please enter in the score for the final exam: " << endl;
      cout << endl;
      cin >> score3;
   }
   while (score3 < MIN || score3 > MAX){
      cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
      cout << endl;
      cout << "Please enter in the score for the final exam: " << endl;
      cout << endl;
      cin >> score3;
      if (cin.fail()){
         cin.clear();
         cin.ignore(BIG,'\n');
         cout << "Sorry, your input must be an integer. Please try again." << endl;
         cout << endl;
         cout << "Please enter in the score for the final exam: " << endl;
         cout << endl;
         cin >> score3;
      }
      
   
   }
   
   while (homework != CANT){
      cout << "Enter the score for a homework assignment: " << endl;
      cout << endl;
      cin >> homework;
      while (cin.fail()){
         cin.clear();
         cin.ignore(BIG,'\n');
         cout << "Sorry, your input must be an integer. Please try again." << endl;
         cout << endl;
         cout << "Enter the score for a homework assignment: " << endl;
         cin >> homework;
      }
      while (homework < CANT || homework > MAX){
         cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
         cout << endl;
         cin >> homework;
      }
      homeworkv.push_back(homework);
   }
   cout << "Enter the score for a homework assignment: " << endl;
   cout << endl;
   cin >> homework;

   homeworkv.pop_back();
   for (unsigned i = 0; i < homeworkv.size(); i++){
      while (homeworkv.at(i) < MIN || homeworkv.at(i) > MAX){
         homeworkv.erase(homeworkv.begin()+i);
      }
   
   }  
   
   
   
   FindMedianScore(homeworkv);
   
   totalScore = median + score1 + score2 + score3;
  
   CalculateLetterGrade(totalScore);
   
   cout << "The median homework score was " << median << endl;
   cout << "The total points earned was " << totalScore << endl;
   cout << "The letter calculated letter grade is " << lettergrade << endl;
   
   
         
   
}
