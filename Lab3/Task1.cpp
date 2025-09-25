#include <iostream>
using namespace std;
int main() {
    // step1:Obtain data,get total weights
    int apples,oranges;
    apples = oranges = 0;  // Initialize the number of apples and oranges
    cout << "Enter the number of apples to buy:";
    cin >> apples;  // Obtain the number of apples
    cout << "Enter the number of oranges to buy:";
    cin >> oranges; // Obtain the number of apples
    int totalWeights = apples * 105 + oranges * 120; // Calculate the total weight of the fruits
    cout << "The total weight is: " << totalWeights << "g"<< endl;

    // step2:Search for the optimal solution
    int temp,cnt100g,cnt50g,cnt20g,cnt10g,cnt5g;
    temp = totalWeights/5; // The total weight of apples and oranges must be a multiple of 5. Introduce a temporary variable to represent the total weight.
    cnt100g = temp/20; // 100 = 20*5.First, divide by the largest value to obtain a quantity of 100g.
    cnt50g = (temp%20)/10; // 50 = 10*5，the remaining 50 part after removing the 100 part
    cnt20g = (temp%10)/4;  // 20 = 4*5
    cnt10g = (temp-20*cnt100g-10*cnt50g-4*cnt20g)/2; // 10 = 2*5.If here we write (temp % 4)/2.It would be a mistake
    cnt5g = temp-20*cnt100g-10*cnt50g-4*cnt20g-2*cnt10g; // From the quantitative relationship，obtain cnt5g

    // step3:Outcome
    cout << "100g-weight:" << cnt100g << endl;
    cout << "50g-weight:" << cnt50g << endl;
    cout << "20g-weight:" << cnt20g << endl;
    cout << "10g-weight:" << cnt10g << endl;
    cout << "5g-weight:" << cnt5g << endl; // Produce the result
    return 0;
}