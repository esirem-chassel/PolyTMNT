#pragma once
#include <ostream>
#include <string>

class Artist {
private:
	std::string name;
	int birthdate;
	int deathdate;
public:
	Artist(std::string name, int birthdate);
	std::string getName() const;
	int getBirthDate() const;
	int getDeathDate() const;
	friend std::ostream& operator<<(std::ostream& os, const Artist& a);
};
