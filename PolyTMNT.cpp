#include <iostream>
#include "Gallery.h"
#include "Artist.h"
#include "Painting.h"

int main()
{
    Artist* a = new Artist("Michaelangeo", 0);
    Artist* v = new Artist("Van Gogh", 0);
    Painting p = Painting("La nuit etoilee", v);
    Painting p2 = Painting("Les tournesols", v);
    Gallery g = Gallery();
    try {
        g.expose(&p);
    }
    catch (std::exception& e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    try {
        g.expose(&p2);
    }
    catch (std::exception& e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    try {
        g.expose(&p);
    }
    catch (std::exception& e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    std::cout << g << std::endl;
    g.unexpose(&p2);
    std::cout << g << std::endl;
    return 0;
}
