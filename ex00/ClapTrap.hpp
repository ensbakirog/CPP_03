#pragma once

#include <string>

class ClapTrap {
private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    // Constructors
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);

    // Destructor
    ~ClapTrap();

    // Assignment operator
    ClapTrap& operator=(const ClapTrap& other);

    // Getters
    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

    // Setters
    void setName(const std::string name);
    void setHitPoints(const unsigned int _hitPoints);
    void setEnergyPoints(const unsigned int _energyPoints);
    void setAttackDamage(const unsigned int _attackDamage);

    // Member functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};