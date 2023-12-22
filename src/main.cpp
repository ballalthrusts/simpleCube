#include "Cube.h"
#include<iostream>

//works only when the header class "Cube.h" is NOT wrapped by a namespace. 

int main() {
    Cube c;

    c.setLength(3.48);
    double volume = c.getVolume();
    std::cout << "Volume: " << volume <<std::endl;
    
    return 17;
}
