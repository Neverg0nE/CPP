# include <iostream>
using namespace std;
int main() {
    int v;
    double fee,d_fee,s_fee,t;
    cout << "Enter the value of water:" << endl;
    cin >> v;
    fee = v/100*0.021;
    d_fee = v/100*0.001;
    s_fee = (fee+d_fee)/50;
    t = fee + d_fee + s_fee;
    cout << "You water charge is:" << fee << endl;
    cout << "You dirty water cleaning charge is:" << d_fee << endl;
    cout << "You service charge is:" << s_fee << endl;
    cout << "You total charge is:" << t << endl;

}