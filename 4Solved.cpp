#include<bits/stdc++.h>
using namespace std;
class fuad{
    public:
    string s = "I am a student and my Id is AB10203090";
    int alphabet = 0, nc = 0;
    void count()
    {
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                alphabet++;
            }
            else{
                nc++;
            }
        }
        cout<<"Total Alphabet = "<<alphabet<<endl;
        cout<<"Total numerical characters = "<<nc<<endl;
    } 
};

int main()
{
    fuad obj;
    obj.count();
    return 0;
}