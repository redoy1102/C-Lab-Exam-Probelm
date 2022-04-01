#include<bits/stdc++.h>
using namespace std;
class fuad{
    public:
    float wm, vm, totalM;
    void input(){
        cout<<"Enter your CSC 284 Written marks = ";
        cin>>wm;
        cout<<"Enter your CSC 284 viva marks = ";
        cin>>vm;
    }
    
    void gradeFinder(){
        totalM = (wm*0.25) + (vm * 0.75);
        if(totalM >= 80)    cout<<"Grade A"<<endl;

        else if(totalM >= 70 && totalM <= 79)   cout<<"Grade B"<<endl;

        else if(totalM >= 60 && totalM <= 69)   cout<<"Grade C"<<endl;

        else if(totalM >= 50 && totalM <= 59)   cout<<"Grade D"<<endl;

        else if(totalM < 50)   cout<<"Fail!"<<endl;
    }
    
};
int main()
{
    fuad obj;
    obj.input();
    obj.gradeFinder();
    return 0;
}