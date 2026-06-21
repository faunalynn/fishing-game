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
            Rarity                      _rarity; //enum
            bool                        _found;
            Location                    _location; //enum
            std::vector<Dialogue>       _lines;
            int                         _linecount;

    public:
            Fish(unsigned int id, std::string name, Rarity rar, Location loc, std::vector<Dialogue> lines);
            ~Fish(void);

            unsigned int getId(void) const;
            std::string getName(void) const;
            Rarity getRarity(void) const;
            bool getFound(void) const;
            Location getLocation(void) const;
            std::string getCurrentLine(void) const;
            int getLinecount(void) const;

            bool unlockNextLine(void); //_linecount++ et renvoi true si ca a reussi
            bool isFullyUnlocked(void) const; 
            void markFound(void);

};

#endif