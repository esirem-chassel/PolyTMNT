#pragma once
#include <string>
#include "Artist.h"

class Painting {
private:
	std::string title;
	Artist* artist;
public:
	Painting(std::string title, Artist* artist);
	std::string getTitle() const;
	Artist* getArtist() const;
	friend std::ostream& operator<<(std::ostream& os, const Painting& p);
};
