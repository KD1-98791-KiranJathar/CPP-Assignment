#include<iostream>
using namespace std;

struct Date{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(); 
    void printDateOnConsole(); 
    void acceptDateFromConsole(); 
    bool isLeapYear(); 
    int selectChoice();

};

int Date::selectChoice(void){
    cout<<"\n********* WELCOME **********";
    cout<<"\n----------------------------";
    cout<<"\n--------- MENU List --------";
    cout<<"\n----------------------------";
    cout<<"\n1. intiDate\n2. acceptDateFromConsole\n3. printDateOnConsole\n4. isLeapYear\n0. Exit\n";
    
    cout<<"\nPlease Select any choise : \n";
    int choice;
    cin>>choice;

    return choice;
}

void Date::initDate(){
    day=25;
    month=8;
    year=2026;

    cout<<"\n Date is initialized";
}

void Date::acceptDateFromConsole(){
    cout<<"Enter Day:"<<endl;
    cin>>day;
    cout<<"Enter Month:"<<endl;
    cin>>month;
    cout<<"Enter Year:\n";
    cin>>year;
}

void Date::printDateOnConsole(){
    cout<<"-----Date----"<<endl;
    cout<<day<<"-"<<month<<"-"<<year;
}

bool Date::isLeapYear(){
    if(year%4==0 ||(year%400==0 && year%100!=0)){
        cout<<"\n"<<year<<"This is leap year";
    }
}

int main(){
    Date d1;
    int n;
    while((n=d1.selectChoice())!=0){
        switch (n)
        {
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.acceptDateFromConsole();
            break;
        case 3:
            d1.printDateOnConsole();
            break;
        case 4: 
            d1.isLeapYear();
            break;
        
        default:
        cout<<"choose valid chice";
            break;
        }
    }
    cout<<"Thank you ! visit again !\n";

    return 0;
}