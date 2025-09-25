#include <iostream>
using namespace std;
int main() {
    //Step1：Obtain data
    int year;
    cout << "Leap Year Calculation" << endl;
    cout << "Enter the year:";
    cin  >> year ; // Obtain the year

    //Step2：Judge
    if (year%4 == 0 && (year%100 != 0 || year%400 ==0)) { // The two conditions for determining a leap year
        cout << "It is a leap year!" << endl;
        cout << "It has 366 days in a year!" << endl;
    }
    else //Except for leap years, all the rest are ordinary years.
        {
        cout << "It is not a leap year!" << endl;
        cout << "It has only 365 days in a year." << endl;
    }
    return 0;
}