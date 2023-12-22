#pragma once

//take the uiuc off if you want to make use of main.cpp or Cube.cpp

namespace uiuc {
    class Cube {
        public:
            double getVolume();
            double getSurfaceArea();
            void setLength(double length);

        private:
            double length_;
    };
}
