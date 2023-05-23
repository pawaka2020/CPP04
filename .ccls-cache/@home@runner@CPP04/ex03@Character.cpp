#include "Character.hpp"

Character::Character() : _name(""), _inventory{nullptr, nullptr, nullptr, nullptr}
{
}

Character::Character(const std::string &name) : _name(name), _inventory{nullptr, nullptr, nullptr, nullptr}
{
}

Character::Character(const Character &other) : _name(other._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i] != nullptr)
        {
            _inventory[i] = other._inventory[i]->clone();
        }
        else
        {
            _inventory[i] = nullptr;
        }
    }
}

Character::~Character()
{
    clearInventory();
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        _name = other._name;

        // Clear existing inventory
        clearInventory();

        // Copy inventory from other character
        for (int i = 0; i < 4; i++)
        {
            if (other._inventory[i] != nullptr)
            {
                _inventory[i] = other._inventory[i]->clone();
            }
            else
            {
                _inventory[i] = nullptr;
            }
        }
    }
    return *this;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == nullptr)
        {
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        _inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx] != nullptr)
    {
        _inventory[idx]->use(target);
    }
}

void Character::clearInventory()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != nullptr)
        {
            delete _inventory[i];
            _inventory[i] = nullptr;
        }
    }
}
