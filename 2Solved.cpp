// A book shop maintains the inventory of books that are being sold at the shop.The list includes details such as author, title, price, publisher and stock position.Whenever a customer wants a book,the sales person inputs the title and author and the system searches the list and displays whether it is available or not.If it is not,an appropriate message is displayed.If it is then the system displays the book details and requests for the number of copies required.If the requested copies are available,the total cost of the requested copies is displayed; otherwise the message “Required copies not in stock” is displayed.
#include<bits/stdc++.h>
using namespace std;
class fuad{
    public:
    string author[4] = {"Balaguru Sami", "Jhankar Mahbub", "Junayed", "Ayman Sadiq"};
    string title[4] = {"C Programming", "Habluder Programming", "Java Script", "XYZ"};
    string publisher[4] = {"Dimik", "Bangla Academy", "XYZ", "ABC"};
    int stock[4] = {10, 20, 30, 40};
    int price[4] = {150, 200, 250, 300};

    void cosmetics(){
        cout<<"<<--------------SHIKKHANGON BD BOOK SHOP---------------->\n<<--------------Let's Learn Something---------------->\n\n";
        for(int i = 0; i < 4; i++){
            cout<<i+1<<". Authors name: "<<author[i] << " - Book Title: "<<title[i] << " - Publisher: "<<publisher[i] << "\nStock: "<<stock[i]<< " - Price: "<<price[i]<<" taka"<<endl<<endl;
        }
    }
    int search(string cAuthor, string cTitle){
        for(int i = 0; i < 4; i++){
            if(author[i] == cAuthor && title[i] == cTitle)      return i;
            else return -1;
        }
    }
    void askCustomer(){
        string cTitle, cAuthor;
        cout<<"\nEnter your book title = ";
        getline(cin, cTitle);
        cout<<"Enter author name = ";
        getline(cin, cAuthor);

        int sea = search(cAuthor, cTitle);

        if(sea != -1){
            cout<<"\nBook found!\n";
            cout<<"Book Title: " << title[sea]<<endl;
            cout<<"Author Name: " << author[sea]<<endl;
            cout<<"Price: " << price[sea]<<endl;
            cout<<stock[sea] << " piece available"<<endl;

            int cPiece;
            cout<<"\nHow many books you need?\n";
            cin>>cPiece;
            if(cPiece <= stock[sea]){
                cout<<"You need to pay = "<<stock[sea]*price[sea]<<" taka"<<endl;
            }
            else{
                cout<<"Required copies not in stock"<<endl;
            }
        }
        else{
            cout<<"Sorry! Book isn't available."<<endl;
        }
    }
};
int main()
{
    fuad fObj;
    fObj.cosmetics();
    fObj.askCustomer();
    return 0;
}