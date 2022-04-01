// There are different classes like AB and DB which store the value of distances.AB stores distances in 
//metres and  centimetres 
//and DB in feet and inches.
//write a program that can read values through the object of the  class.
// The display the value of feet and inches or metres and centimetres.
#include<bits/stdc++.h>
using namespace std;
class AB{
    public:
    float m, c;
    void input(){
        cout<<"Enter distance as meter unit = ";
        cin>>m;
        cout<<"Enter distance as centimeters unit = ";
        cin>>m;
    }
};
class DB{
    public:
    float f, i;
    void input(){
        cout<<"\nEnter distance as feet unit = ";
        cin>>f;
        cout<<"Enter distance as inches unit = ";
        cin>>i;
    }
};
int main()
{
    AB abObj;
    DB dbObj;
    abObj.input();
    dbObj.input();
    cout<<"\n\nValue of feet = "<<dbObj.f<<endl;
    cout<<"Value of inches = "<<dbObj.i<<endl;
    return 0;
}