#ifndef DATE_H
#define DATE_H
#include <ctime>

class Date 
{
    public:
        Date(); //creates a date with current calendar date
        short getYear() {return _year;};
        short getMonth() {return _month;};
        short getDay() {return _day;};
    
    private:
        short _year, _month, _day;
    
};

#endif