#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_learnedMaterias[4];
    int _learnedCount;

public:
    MateriaSource();
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria *m);
    virtual AMateria *createMateria(std::string const &type);

private:
    void clearLearnedMaterias();
};

#endif
