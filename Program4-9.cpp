// This program uses an if/else statement to assign a letter 
// grade of A, B, C, D, or F to a mueric test score. A trailing // else is used to set a flag if a negative value is enetered.
#include<iostream>
using namespace std;

int main()
{
    // Create named constants to hold minimum
    // scores required for each letter grade.
    const int min_a_score = 90,
              min_b_score = 80,
              min_c_score = 70,
              min_d_score = 60,
              min_possible_score = 0;

    int testScore;      // Holds a numeric test score
    char grade;         // Holds a letter grade
    bool goodScore = true;

    // Get the numeric score
    cout << "Enter your numeric test score and I will\n";
    cout << "tell y9ou the letter grade you earned: ";
    cin >> testScore;

    // Determine the letter grade
    if (testScore >= min_a_score)
        grade = 'A';
    else if (testScore >= min_b_score)
        grade = 'B';
    else if (testScore >= min_c_score)
        grade = 'C';
    else if (testScore >= min_d_score)
        grade = 'D';
    else if (testScore >= min_possible_score)
        grade = 'F';
    else 
        goodScore = false;          // The socre was below 0
    
    // Display the letter grade
    if (goodScore)
        cout << "Your grade is " << grade << ".\n";
    else
        cout << "The score cannot be below zero. \n";
    
    return 0;
}