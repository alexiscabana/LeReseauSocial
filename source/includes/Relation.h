#ifndef RELATION_H
#define RELATION_H

#include "Date.h"

using namespace std;

class Relation
{
    public:
        Relation();
        enum RelationType {AMITIE, CONNAISSANCE, TRAVAIL, NB_REL};
        string getRelationType();

    private:
        RelationType _type;
        Date startingDate;
};

#endif