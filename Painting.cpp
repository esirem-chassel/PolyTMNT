#include "Painting.h"

Painting::Painting(std::string title, Artist* artist) : title(title), artist(artist) {
};

std::string Painting::getTitle() const {
	return this->title;
};

Artist* Painting::getArtist() const {
	return this->artist;
};

std::ostream& operator<<(std::ostream& os, const Painting& p) {
	os << p.getTitle() << " (par " << (*p.getArtist()) << " )";
	return os;
};
