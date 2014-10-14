#include "includes/Relation.h"

string Relation::getRelationType()
{
    if(_type == RelationType.AMITIE) return "Amitie";
    else if (_type == RelationType.CONNAISSANCE) return "Connaissance";
    else if (_type == RelationType.TRAVAIL) return "Travail";
    else return "Autres";
}