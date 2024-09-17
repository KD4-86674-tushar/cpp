#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;


public:
Date()
{
   day=0;
   month=0;
   year=0;
}
Date(int day,int month,int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}
void Setday(int day)
{
    this->day=day;
}
void Setmonth(int month)
{
    this->month=month;
}
void Setyear(int year)
{
    this->year=year;
}
void DisplayDate()
{
     cout<<"Date of Birth:"<<day<<"/"<<month<<"/"<<year<<endl;
}
void AcceptDate()
{
     cout<<"Enter the date ";
     cin>>day;
     cout<<"Enter the month ";
     cin>>month; 
     cout<<"Enter the year ";  
     cin>>year;
}

};
class Person
{
    string name;
    string Address;
    Date dob;
public:
Person()
{
    name="";
    Address="";

}
Person(string name,string Address,int day,int month, int year)
{
    this->name=name;
    this->Address=Address;
    this->dob.Setday(day);
    this->dob.Setmonth(month);
    this->dob.Setyear(year);
}
void Display()
{
     cout<<"\nName "<<name<<endl;
     cout<<"Address "<<Address<<endl;
     dob.DisplayDate();
}
void acceptperson()
{
     cout<<"Enter Name of the person ";
     cin>>name;
     cout<<"Enter the Address: ";
     cin>>Address;   
     dob.AcceptDate();
}

};

int main()
{
    Person p1;
    p1.acceptperson();
    p1.Display();
   

}


