#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <iostream>

class Date 
{
    public:
        Date(); //creates a date with current calendar date
        short getYear() {return _year;};
        short getMonth() {return _month;};
        short getDay() {return _day;};
        friend std::ostream& operator<< (std::ostream&, const Date&);
    
    private:
        short _year, _month, _day;
    
};

#endif