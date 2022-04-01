//Assume that you are meeting  in your university  after 
// Pandemic time. You lost your phone don’t have the number of your best friend. So you have collected your friends name and number and you saved and found that the name already in contact list but in another number. So you saved again in your phone her number under the same contact.
// Now which OOP features resemblance the situation. Write a C++
#include<bits/stdc++.h>
using namespace std;
class fuad{
    public:
    string name[5], Sname;
    int num[5], sNum, opt;

    void storeNum(){
        cout<<"For this problem you need to save the contact information first.\nSo first input name = ";
        getline(cin, name[0]);
        cout<<"and phone number = ";
        cin>>num[0];
    }

    void saveAgain(){
        cout<<"Enter the name which you want to save = ";
        cin>>Sname;

        int size = sizeof(name) / sizeof(name[0]);

        for(int i = 0; i < size; i++){
            if(Sname == name[i]){
                cout<<"Name already exist! Do you want to save this number in the same name?\nPress - 1 for YES\nPress - 2 for NO.\nPress now = ";
            }
        }
        cin>>opt;
        if(opt == 1){
            name[1] = Sname;
            cout<<"Enter the number which you want to save = ";
            cin>>num[1];
            cout<<"Number saved!";
        }
    }
};
int main()
{
    fuad obj;
    obj.storeNum();
    obj.saveAgain();
}