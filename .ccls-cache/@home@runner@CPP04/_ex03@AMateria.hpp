#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
//#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string const _type;

public:
    AMateria(std::string const &type);
    virtual ~AMateria();

    std::string const &getType() const;

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif
