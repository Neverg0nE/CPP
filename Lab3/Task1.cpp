#include <iostream>
using namespace std;
int main() {
    int apples,oranges;
    apples = oranges = 0;  // 初始化苹果和橘子的数量
    cout << "Enter the number of apples to buy:";
    cin >> apples;  //得到苹果的数量
    cout << "Enter the number of oranges to buy:";
    cin >> oranges; //得到橘子的数量
    int totalWeights = apples * 105 + oranges * 120; //计算水果总重量
    cout << "The total weight is: " << totalWeights << "g"<< endl; //输出总重量，单位g

    int temp,cnt100g,cnt50g,cnt20g,cnt10g,cnt5g;  //声明6个参数
    temp = totalWeights/5; // 苹果和橘子的总重量肯定是5的倍数，引入临时变量代替总重量
    cnt100g = temp/20; //100 = 20*5，先除以最大的得到100g的数量
    cnt50g = (temp%20)/10; //50 = 10*5，只能得到0/1
    cnt20g = (temp%10)/4;  //20 = 4*5，除以10得到凑不齐50的量
    cnt10g = (temp-20*cnt100g-10*cnt50g-4*cnt20g)/2; //10 = 2*5，不用（temp%4）是为了规避
    cnt5g = temp-20*cnt100g-10*cnt50g-4*cnt20g-2*cnt10g; // 由数量关系得到cnt5g

    cout << "100g-weight:" << cnt100g << endl;
    cout << "50g-weight:" << cnt50g << endl;
    cout << "20g-weight:" << cnt20g << endl;
    cout << "10g-weight:" << cnt10g << endl;
    cout << "5g-weight:" << cnt5g << endl;
    return 0;
}