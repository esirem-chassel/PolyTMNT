#include "Gallery.h"

Gallery::Gallery() {
	this->paintings = {};
};

void Gallery::addPainting(Painting* p) {
	if(!this->isExposed(p)) {
		this->paintings.push_back(p);
	}
	else {
		throw std::invalid_argument("This painting is already exposed !");
	}
};

bool Gallery::isExposed(Painting* p) const {
	bool r = false;
	for (Painting* p2 : this->getPaintings()) {
		if (p == p2) {
			r = true;
			break;
		}
	}
	return r;
}

std::vector<Painting*> Gallery::getPaintings() const {
	return this->paintings;
};

std::ostream& operator<<(std::ostream& os, const Gallery& g) {
	for (Painting* p : g.getPaintings()) {
		os << (*p) << std::endl;
	}
	return os;
};
