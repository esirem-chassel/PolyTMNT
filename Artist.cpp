#include "Artist.h"

Artist::Artist(std::string name, int birthdate): name(name), birthdate(birthdate) {
};

std::string Artist::getName() const {
	return this->name;
};

int Artist::getBirthDate() const {
	return this->birthdate;
};

int Artist::getDeathDate() const {
	return this->deathdate;
};

std::ostream& operator<<(std::ostream& os, const Artist& a) {
	os << a.getName();
	return os;
};
