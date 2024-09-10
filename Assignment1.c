#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate){
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 1900;
}

void printDateOnConsole(struct Date* ptrDate){
    printf("Date : %d-%d-%d", ptrDate->day, ptrDate->month,ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("Enter the day, month and year : ");
    scanf("%d%d%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
}

int main()
{
    struct Date d;
    initDate(&d);
    acceptDateFromConsole(&d);
    printDateOnConsole(&d); 

    return 0;

}