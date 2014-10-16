#ifndef MEMBER_H
#define MEMBER_H

#include <map>
#include <string>
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
	void requestFriendship(Member*,Relation*);
        void addRelation(Member* otherMember, Relation* rel);
    
    private:
        std::string _name;
        Date _joiningDate;
        std::map<Member*, Relation> _relations, _friendRequests;
};

#endif