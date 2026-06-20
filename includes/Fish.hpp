#ifndef FISH_HPP
#define FISH_HPP

#include "structs.hpp"
#include <string>
#include <vector>


class Fish
{
    private:
            unsigned int                _id;
            std::string                 _name;
            unsigned int                _rarity; //enum
            bool                        _found;
            unsigned int                _location; //enum
            std::vector<Dialogue>       _lines;
            int                         _linecount;

    public:
};

#endif