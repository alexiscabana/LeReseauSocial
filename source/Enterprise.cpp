#include "includes/Enterprise.h"

Enterprise::Enterprise(std::string name, short year, short month, short day){
	_creation = Date(year, month, day);
}