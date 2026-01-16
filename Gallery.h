#pragma once
#include <vector>
#include "Painting.h"

class Gallery {
private:
	std::vector<Painting*> paintings;
public:
	Gallery();
	void expose(Painting* p);
	void unexpose(Painting* p);
	std::vector<Painting*> getPaintings() const;
	bool isExposed(Painting* p) const;
	friend std::ostream& operator<<(std::ostream& os, const Gallery& g);
};
