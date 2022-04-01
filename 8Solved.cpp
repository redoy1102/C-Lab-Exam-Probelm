// Create your final exam routine regarding course number, course name, date, time and room number.Write a program if confict is there then you will get the message 'CONFLICT'.
#include<bits/stdc++.h>
using namespace std;
class fuad{
    public:
    string cName[4] = {"DLD", "Assembly Language", "Operating System", "Numerical Mathematics"};
    string cCode[4] = {"CSC329", "CSC197", "CSC107", "MAT247"};
    string cDate[4] = {"11April", "11April", "16April", "18April"};
    string cTime[4] = {"8:30AM", "1:00pm", "8:30AM", "8:30AM"};

    void allCoursesInfoPrint(){
        for(int i = 0; i < 4; i++){
            cout<<"Exam - "<<i+1<<" info.\n";
            cout<<"Course name: "<<cName[i]<<endl;
            cout<<"Course Code: "<<cCode[i]<<endl;
            cout<<"Course Date: "<<cDate[i]<<endl;
            cout<<"Course Time: "<<cTime[i]<<endl<<endl;
        }
    }
    void findConflict(){
        for(int i = 0; i < 3; i++){
            for(int j = i+1; j < 4; j++){
                if(cDate[i] == cDate[j]){
                    if(cTime[i] == cTime[j]){
                        cout<<"CONFLICT!!"<<endl;
                    }
                }
            }
        }
    }
};

int main()
{
    fuad obj;
    obj.allCoursesInfoPrint();
    obj.findConflict();
    return 0;
}