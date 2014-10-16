#include "includes/Member.h"

void addRelation(Member* otherMember, Relation* rel)
{
	
}

void requestFriendship(Member* otherMember, Relation* rel)
{
	if(otherMember!=this) //can't be friend with yourself
		otherMember->_friendRequests.insert(std::pair<Member*,Relation*>(this,rel));
}
