#include<iostream>
using namespace std;


class Time
{
  int hour;
  int minute; 
  int second;

public:
    Time()
    {
       hour=0;
       minute=0; 
       second=0;
    }
    Time(int h,int m,int s)
    {
        this->hour=h;
        this->minute=m;
        this->second=s;

    }
int getHour()
{
   return hour;
}
int getMinute()
{
    return minute;
}
int getSeconds()
{
    return second;
}
void printTime()
{
    cout<<"\nTime  :"<<endl;
    cout<<"Hour  :"<<hour<<endl;
    cout<<"Minute :"<<minute<<endl;
    cout<<"Second :"<<second<<endl;
}


void SetHour(int hour)
{
    this->hour=hour;
}
void SetMinute(int minute)
{
      this->minute=minute;
}
void setSeconds(int second)
{
      this->second=second;
}
};


int main()
{
    
    Time **ptr=new Time*[5];
    int count=1;
    for(int i=0;i<5;i++)
    {
        int hr,min,sec;
        cout<<"\nEnter the Hours for time "<<count<<endl;
        cin>>hr;
        cout<<"Enter the minutes for time "<<count<<endl;
        cin>>min;
        cout<<"Enter the second for time "<<count<<endl;
        cin>>sec;
        ptr[i]=new Time(hr,min,sec);
        count++;
   }
   for(int i=0;i<5;i++)
   {
       ptr[i]->printTime();
   }
     for (int i = 0; i < 5; i++)
    {
        delete ptr[i];
        ptr[i] = NULL;
    }

    delete[] ptr;
    ptr = NULL;
    return 0;

}