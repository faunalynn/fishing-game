#include "../includes/Fish.hpp"

Fish::Fish(unsigned int id, std::string name, Rarity rar, Location loc, std::vector<Dialogue> lines) :
_id(id), _name(name), _rarity(rar), _location(loc), _lines(lines) 
{
    _found = false;
    _linecount = -1;
}

Fish::~Fish(void)
{

}

unsigned int Fish::getId(void) const
{
    return (this->_id);
}

std::string Fish::getName(void) const
{
    return (this->_name);
}

Rarity Fish::getRarity(void) const
{
    return (this->_rarity);
}

bool Fish::getFound(void) const
{
    return (this->_found);
}

Location Fish::getLocation(void) const
{
    return (this->_location);
}

std::string Fish::getCurrentLine(void) const
{
    if (this->_linecount < 0)
        return ("");
    else
        return (this->_lines.at(_linecount).text);
}

int Fish::getLinecount(void) const
{
    return (this->_linecount);
}

bool Fish::unlockNextLine(void)
{
     if (_linecount + 1 < static_cast<int>(_lines.size()))
    {
        _linecount++;
        return (true);
    }
    else
        return (false);
}

bool Fish::isFullyUnlocked(void) const
{
    return (_linecount + 1 == static_cast<int>(_lines.size()) ? true : false);
}

void Fish::markFound(void)
{
    if (_found == false)
        _found = true;
}