#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;
public :
    void initDate(){
        day = 1;
        month = 1;
        year = 1900;
        cout << "Date : " << day << " - " << month << " - " << year << endl;
    }

    void printDateOnConsole(){
        cout << "Date : " << day << " - " << month << " - " << year << endl;
    }
    void acceptDateFromConsole(){
        cout << "Enter the day, month and year : ";
        cin >> day >> month >> year;
    }
    bool isLeapYear(){
        if((year % 4 == 0 and year%100 != 0) or year%400 == 0)
        {
            cout<< "Leap Year"<< endl;
        }
        else
        {
            cout << "Not Leap Year"<<endl;
        }        

    }
};
int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. ADD Date" << endl;
    cout << "2. DISPLAY Date" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    Date d;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            d.acceptDateFromConsole();
            d.printDateOnConsole();
            d.isLeapYear();
            break;
        case 2:
            d.printDateOnConsole();
            d.isLeapYear();
            break;
        default:
            cout << "Wrong Choice..." << endl;
            d.initDate();
            d.isLeapYear();
            break;
        }
    }
    

    return 0;

}
