#ifndef RELATION_H
#define RELATION_H

#include "Date.h"
#include <string>

class Relation
{
    public:
        enum RelationType {AMITIE, CONNAISSANCE, TRAVAIL, NB_REL};
        Relation(RelationType type=CONNAISSANCE):_type(type){ _startingDate = Date();};
        std::string getRelationType();
        void accept(){isAccepted=true;};

    private:
        RelationType _type;
        Date _startingDate;
        bool isAccepted=false;
};

#endif
