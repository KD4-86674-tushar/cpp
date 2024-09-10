#include<iostream>
using namespace std;

struct Date
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
    bool isLeapYear()
    {
        if((year % 4 == 0 and year%100 != 0) or year%400 == 0)
        {
            cout<< "Leap Year"<< endl;
            return true;
        }
        else
        {
            cout << "Not Leap Year"<<endl;
            return false;
        }        

    }
};
int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. ADD Date" << endl;
    cout << "2. DISPLAY Date" << endl;
    cout << "3. Leap Year" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    struct Date d;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            d.acceptDateFromConsole();
            break;
        case 2:
            d.printDateOnConsole();
            break;
        case 3:
            if(d.isLeapYear()){
                cout<<"True"<<endl;
            }
            else{
                cout<<"False"<<endl;
            }
            break;
        default:
            cout << "Wrong Choice..." << endl;

            break;
        }
    }
    

    return 0;

}
