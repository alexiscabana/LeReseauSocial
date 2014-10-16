#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <iostream>

class Date 
{
    public:
        Date(); //creates a date with current calendar date
	Date(short year, short month, short day)
	:_year(year), _month(month), _day(day) {};
        short getYear() const {return _year;} ;
        short getMonth() const {return _month;} ;
        short getDay() const {return _day;} ;
        
    private:
        short _year, _month, _day;
};
std::ostream& operator<<(std::ostream& os, const Date& date);

#endif