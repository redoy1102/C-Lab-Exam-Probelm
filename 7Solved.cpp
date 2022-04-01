// Write a program that accepts three numbers from the user and 
// prints "increasing" if the numbers are in increasing order, 
// "decreasing" if the numbers are in decreasing order, and "Neither 
// increasing or decreasing order" otherwise. Go to the editor
// Test Data
// Input first number: 1524
// Input second number: 2345
// Input third number: 3321
// Expected Output :Increasing order.

#include<bits/stdc++.h>
using namespace std;
class fuad{
    public:
    int a, b, c;
    void input(){
        cout<<"Enter three numbers = ";
        cin>>a>>b>>c;
    }
    int checker(){
        if(a > b){
            if(b > c)   return 0;
        }
        else{
            if(c > b){
                if(b > a)   return 1;
            }
        }
        return 2;
    }
    
};
int main()
{
    fuad obj;
    obj.input();
    int res = obj.checker();

    if(res == 0)    cout<<"Decreasing order."<<endl;
    else if(res == 1)   cout<<"Increasing order."<<endl;
    else    cout<<"Neither increasing or decreasing order"<<endl;
    return 0;
}