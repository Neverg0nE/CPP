#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Leap Year Calculation" << endl;
    cout << "Enter the year:" << endl;
    cin  >> year ;
    if (year%4 == 0 && (year%100 != 0 || year%400 ==0)) {
        cout << "It is a leap year!" << endl;
        cout << "It has 366 days in a year!" << endl;
    }
    else
        {
        cout << "It is not a leap year!" << endl;
        cout << "It has only 365 days in a year." << endl;
    }
    return 0;
}