#include<iostream>

using namespace std;

class Date{
    private: 
    int day;
    int month;
    int year;

    public:
    Date(void):day(1),month(1),year(2000){

    }

    void acceptRecord(){
        cout<<"Enter day : ";
        cin>>day;

        cout<<"Enter month : ";
        cin>>month;

        cout<<"Enter year : ";
        cin>>year;
    }

    void printRecord(){
        cout<<"Date : "<<day<<"-"<<month<<"-"<<year<<endl;

    }
};

class Person{
    private:
    string name;
    string address;
    Date birthDate; //  Association

    public:
    Person(void):name(" "),address(" "){

    }
    
    Person(string name,string address,Date birthdate):name(name),address(address),birthDate(birthDate){
    }

    void acceptRecord(){
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter address : ";
        cin>>address;
        cout<<"Enter BirthDate :";
        this->birthDate.acceptRecord();
    }

    void displayRecord(){
        cout<<"-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"BirthDate :";
        this->birthDate.printRecord();
        cout<<"-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    }
};

class Student{
    private:
    int id;
    double marks;
    string course;
    
    //Person p;

    Date joinDate;   // Association
    Date endDate;  // Association

    public:
    // Student(int id,double marks,string course,Date joinDate): id(id),marks(marks)course(course),{}

    void acceptRecord(){
        cout<<"Enter id : ";
        cin>>id;
        cout<<"Enter marks : ";
        cin>>marks;
        cout<<"Enter course : ";
        cin>>course;

       // this->p.acceptRecord();

        cout<<"Enter Join Date :"<<endl;
        this->joinDate.acceptRecord();

        cout<<"Enter End Date :";
        this->endDate.acceptRecord();
    }

    void displayRecord(){
       cout<<"-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
        cout<<"id : "<<id<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"course : "<<course<<endl;

       // this->p.displayRecord();

        cout<<"Join Date :";
        this->joinDate.printRecord();

        cout<<"End Date :";
        this->endDate.printRecord();
          cout<<"-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    }
};

int main(){
    Date d1;
    //d1.acceptRecord();
    Person p;
    Person p1("kirna","pune",d1);
    p.acceptRecord();
    //p.displayRecord();

    Student s1;
    s1.acceptRecord();
    p.displayRecord();
    s1.displayRecord();
    
}