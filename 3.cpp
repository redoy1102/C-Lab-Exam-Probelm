//Assume that a bank maintains two kinds of accounts for customers,
//one called as savings account and the other as current account.
//The savings account provides compound interest and withdrawal facilities
//but no cheque book facility.
//The current account provides cheque book facility but no interest.
//Current account holders should also maintain a minimum balance and
//if the balance falls below this level,a service charge is imposed.
// Execute a program to show the following:
// Display the balance and withdrawn records ( included interest )with account holder information.
#include<bits/stdc++.h>
using namespace std;
class fuad(){
public:
    int pAmount, rate, time, ci;
    void ci(){
        cout<<"Enter your principle amount = ";
        cin>>pAmount;
        cout<<"Enter rate = ";
        cin>>rate;
        cout<<"Enter time = ";
        cin>>time;
        ci = pAmount(pow((1 + rate / 100), time));
    }
    void

};
int main(){
    fuad obj;
    int opt;
    wrong:
    cout<<"Press - 1 for Savings account.\n";
    cout<<"Press - 2 for current account.\n";
    cout<<"Press - 0 for exit\nPress now - ";
    cin>>opt;
    switch(opt){
    case 1:
        cout<<"Press - 1 for Compound interest.\n"
        obj.ci();
        break;
    case 2:
        obj.current();
        break;
    case 0:
        break;
    default:
        cout<<"Wrong input!\n;
        goto wrong;
    }
    return 0;
}
