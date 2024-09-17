#include<iostream>
using namespace std;

class Student
{
   const int Roll_number;
   static int genrate_rollno; 
   string Name;
   string gender;
   int marks[3];
  


public:
    Student():Roll_number(++genrate_rollno)
    {
        

    }
    Student(string Name,string gender):Roll_number(++genrate_rollno)
    {
        
        
        this->Name=Name;
        this->gender=gender;
    }
    int getRollno()
    {
        return this->Roll_number;
    }
    void AcceptStudent()
    {
        cout<<"\nEnter Name: "<<endl;
        cin>>Name;
        cout<<"Enter gender: "<<endl;
        cin>>gender;
        for(int i=0;i<3;i++)
        {
           cout<<"Enter marks for subject : "<<i+1<<endl;
           cin>>marks[i];
        }



    }
    void DisplayStudent()
    {
        cout<<" Rollno: "<<Roll_number;
        cout<<" Name: "<<Name;
        cout<<" Gender: "<<gender<<"\n";
        for(int i=0;i<3;i++)
        {
           cout<<"Marks for subject : "<<i+1<<endl;
           cout<<marks[i]<<endl;
        }
        cout<<" Percentage: "<<this->Getpercentage();
        

    }
    float Getpercentage()
    {
            int total = 0; 
         for (int i = 0; i < 3; i++) 
         {
                total += marks[i];
        }
    return (total / 300.0) * 100; 

    }
    
};
int Student::genrate_rollno=100;
int search(Student **arr,int count)
    {
        int rollno;
        cout<<"Enter Rollno to search ";
        cin>>rollno;
       for(int i =0; i<count ;i++)
       {
          if(rollno == arr[i]->getRollno())
                return i;
       } return -1;
}
int main()
{
    Student *s[5];
    int choice;
    int count=0;
    do {
        cout << "\nMenu:" << endl;
        cout << "1.Add Student" << endl;
        cout << "2.Display the details " << endl;
        cout << "3.Search the student" << endl;
        cout << "4.Exit" << endl;
      

        cin >> choice;
      
        switch (choice) 
        {
            case 1:
            {
               s[count]=new Student();
               s[count]->AcceptStudent();
               count++;
            }
            break;
            case 2:
            {  
                
                cout<<"\nDetails of students you entered "<<endl;
                for(int k=0;k<count;k++)
                {
                     s[k]->DisplayStudent();
                }

            }
            break;
            case 3:
            {
                int index = search(s, count);
                if(index!=-1)
                   s[index]->DisplayStudent();
                else
                   cout<<"Student Not Found";

            }
            break;
            case 4:
            {
                cout<<"Exiting program........";
                 for (int k = 0; k < count; k++) {
                    delete s[k];
                }
            }
            break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

}
   