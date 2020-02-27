/*
* This is an example of multi-way selection
* using if-else statements.
* By: L. Snedden
*/
#include <stdio.h>
//Function prototype here
char scoreToGrade(int);
int main(void)
{
//Local Declarations
int numScore = 0;
char ltrGrade = ' ';
 //Get input
printf("Enter in a number grade between 0 and 100: ");
scanf("%d", & numScore);
//Process
ltrGrade = scoreToGrade(numScore);
//Output
printf("The letter grade is: %c\n", ltrGrade);
return 0;
}//end main
//Function comments/description here
char scoreToGrade(int score)
{
char grade = ' ';
if(score >= 90)
grade = 'A';
else if(score >= 80)
grade = 'B';
else if(score >= 70)
grade = 'C';
else if(score >= 60)
grade = 'D';
else
grade = 'F';
return grade;
}//end function 
