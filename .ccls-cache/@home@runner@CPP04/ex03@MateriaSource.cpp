#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _learnedCount(0)
{
    for (int i = 0; i < 4; i++)
    {
        _learnedMaterias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource()
{
    clearLearnedMaterias();
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (_learnedCount < 4 && m != nullptr)
    {
        _learnedMaterias[_learnedCount] = m;
        _learnedCount++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < _learnedCount; i++)
    {
        if (_learnedMaterias[i]->getType() == type)
        {
            return _learnedMaterias[i]->clone();
        }
    }
    return nullptr;
}

void MateriaSource::clearLearnedMaterias()
{
    for (int i = 0; i < _learnedCount; i++)
    {
        delete _learnedMaterias[i];
        _learnedMaterias[i] = nullptr;
    }
    _learnedCount = 0;
}
