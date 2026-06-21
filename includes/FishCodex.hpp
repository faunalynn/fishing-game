#ifndef FISHCODEX_HPP
#define FISHCODEX_HPP

#include <string>
#include <vector>
#include <cassert>
#include "Fish.hpp"

class FishCodex 
{
    private:
            std::vector<Fish>   _fishes;
    public:
            FishCodex(void);
            ~FishCodex(void);

            void addFish(Fish &fish);
            Fish getFishById(unsigned int id) const;
            std::vector<Fish> getLocFishes(Location loc) const;
            bool allFound(void) const;
};

#endif