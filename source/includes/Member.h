#ifndef MEMBER_H
#define MEMBER_H

#include <map>
#include <string>
#include <utility>

#include "Date.h"
#include "Relation.h"

class Member
{
    public:
        Member(std::string name)
        :_name(name)
        {
            _joiningDate = Date();
        };
        
        std::string getName() const {return _name;};
        Date getJoiningDate() const {return _joiningDate;};
        void addRelation(Member* otherMember, Relation* rel);
    
    private:
        std::string _name;
        Date _joiningDate;
        std::list<std::pair<Membre*, Relation> > _relations;
};

#endif