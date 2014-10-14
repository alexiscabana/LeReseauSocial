#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include "includes/Date.h""

class Member
{
    public:
        Member(string name)
        :_name(name)
        {
            _joiningDate = Date();
        };
        
        string getName(){return _name;};
        Date getJoiningDate(){return _joiningDate;};
    
    private:
        string _name;
        Date _joiningDate;
    
};

#endif