// This program determines whether a loan applicant qualifies for
// a special loan interest rate. It uses nested if/else statements.
#include<iostream>
using namespace std;

int main()
{
    char employed,      // Currently employed? (Y or N)
         recentGrad;    // REcent college graduate? (Y or N)

    // Is the applicant employed anda recent college graduate?
    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or N for No.\n";

    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college in the past two years? ";
    cin >> recentGrad;

    // Determine the applicant's loan qualifications
    if (employed == 'Y')
    {
        if (recentGrad == 'Y')      // Employed and a recent grad
        {
            cout << "You qualify for the speicial interest rate.\n";
        }
        else        // Employed but not a recent grad
        {
            cout << "You must have graduated from college in the past\n";
            cout << "two years to qualify for the special interest rate.\n";
        }
    }
    else 
    {
        cout << "You must be employed to qualify for the "
             << "special interest rate. \n";
    }

    return 0;

}