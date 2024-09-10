#include<iostream>
using namespace std;

namespace NStudent
{
    int roll_no = 0;
    string name = " ";
    int marks = 0;
} 

class Student
{
    int roll_no; 
    string name; 
    int marks;
public:
    void initStudent() // to initialize the student object with default values for data members (0,” ”,0);
    {
        NStudent:: roll_no;
        NStudent :: name;
        NStudent:: marks;
        cout << "Roll No : " << roll_no <<  endl;
        cout << "Name : " << name<<  endl;
        cout << "Marks : " << marks <<  endl;

    }
    void printStudentOnConsole(){
        cout << "Roll No : " << roll_no <<  endl;
        cout << "Name : " << name<<  endl;
        cout << "Marks : " << marks <<  endl;
    }
    void acceptStudentFromConsole(){
        cout << "Enter the Roll_no : ";
        cin >> roll_no;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the Marks : ";
        cin >> marks;
    }

};
int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. ADD Student Details" << endl;
    cout << "2. DISPLAY Student Details" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}
int main(){
    int choice;
    Student s;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            s.acceptStudentFromConsole();
            break;
        case 2:
            s.printStudentOnConsole();
            break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
    return 0;
}