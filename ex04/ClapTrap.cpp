/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 17:11:40 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/19 19:44:10 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	health(100), max_health(100), energy(50), max_energy(50), level(1),
	name(""), melee_dmg(20), ranged_dmg(15), armor(3)
{
	std::cout << "CL4P-TP default constructor called" << std::endl;
}

ClapTrap::ClapTrap(int health, int energy, int melee_dmg, int ranged_dmg,
		int armor, std::string name) :
	health(health), max_health(health), energy(energy), max_energy(energy),
	level(1), name(name), melee_dmg(melee_dmg), ranged_dmg(ranged_dmg),
	armor(armor)
{
	std::cout << "CL4P-TP " << name << " ready for challenge." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout	<< "CL4P-TP clone " << name << " ready for challenge."
				<< std::endl;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->health = rhs.health;
	this->max_health = rhs.max_health;
	this->energy = rhs.energy;
	this->max_energy = rhs.max_energy;
	this->level = rhs.level;
	this->name = rhs.name;
	this->melee_dmg = rhs.melee_dmg;
	this->ranged_dmg = rhs.ranged_dmg;
	this->armor = rhs.armor;
	std::cout << "CL4P-TP " << name << " moved into challenge." << std::endl;
	return (*this);
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout	<< "CL4P-TP " << name << " attacks " << target << " at range, "
				<< "causing " << ranged_dmg << " points of damage !"
				<< std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout	<< "CL4P-TP " << name << " attacks " << target << " at melee, "
				<< "causing " << melee_dmg << " points of damage !"
				<< std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	dmg = std::max((int)(amount - armor), 0);
	if ((long int)health - (long int)dmg < 0)
		health = 0;
	else
		health -= dmg;
	std::cout	<< "CL4P-TP " << name << " takes " << dmg << " points of dmg."
				<< " I have " << health << " hitpoints." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (health + amount > max_health)
		health = max_health;
	else
		health += amount;
	std::cout	<< "CL4P-TP " << name << " takes " << amount
				<< " points of repair."
				<< " I have " << health << " hitpoints." << std::endl;
}
