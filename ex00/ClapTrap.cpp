#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(10) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10) {
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.getName();
		this->hitPoints = other.getHitPoints();
		this->energyPoints = other.getEnergyPoints();
		this->attackDamage = other.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName( void ) const {
	return this->name;
}

void ClapTrap::setName( const std::string name ) {
	this->name = name;
}

unsigned int ClapTrap::getHitPoints( void ) const {
	return this->hitPoints;
}

void ClapTrap::setHitPoints( const unsigned int _hitPoints ) {
	this->hitPoints = _hitPoints;
}

unsigned int ClapTrap::getAttackDamage( void ) const {
	return this->attackDamage;
}

void ClapTrap::setAttackDamage( const unsigned int _AttackDamage ) {
	this->attackDamage = _AttackDamage;
}


unsigned int ClapTrap::getEnergyPoints( void ) const {
	return this->energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->getHitPoints() <= 0) {
		std::cout << this->getName() << " is already dead! cannot take damage." << std::endl;
		return;
	}
	if (this->getHitPoints() <= amount) {
		this->setHitPoints(0);
		std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
	}
	else {
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << this->getName() << " is dead, cannot attack." << std::endl;
		return;
	}
	else if (this->getHitPoints() <= 0)
	{
		std::cout << this->getName() << "is dead, cannot attack." << std::endl;
		return;
	}
	else
	{
		--this->energyPoints;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	}	
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHitPoints() <= 0)
	{
		std::cout << this->getName() << " is already dead! cannot be repaired." << std::endl;
		return;
	}
	else if (this->getEnergyPoints() <= 0)
	{
		std::cout << this->getName() << " has not energy!";
		return;
	}
	else {
		this->hitPoints += amount;
		--this->energyPoints;
		
		std::cout << this->getName() << " get " << amount << " energy." << std::endl;
	}
}