#include <iostream>
#include "Cube.h"

//works only when the header class "Cube.h" IS wrapped by a namespace. 

int main() {
    uiuc::Cube c;
    c.setLength(2.4);
    std::cout << "Volume: " << c.getVolume() << std::endl;

    double surfaceArea = c.getSurfaceArea();
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    return 17;
}
