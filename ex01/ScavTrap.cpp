/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:18:38 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 17:07:05 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	health(100), max_health(100), energy(50), max_energy(50), level(1),
	name(""), melee_dmg(20), ranged_dmg(15), armor(3)
{
	std::cout << "SC4V-TP default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	health(100), max_health(100), energy(50), max_energy(50), level(1),
	name(name), melee_dmg(20), ranged_dmg(15), armor(3)
{
	std::cout << "SC4V-TP " << name << " ready for challenge." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
	std::cout	<< "SC4V-TP clone " << name << " ready for challenge."
				<< std::endl;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
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
	std::cout << "SC4V-TP " << name << " moved into challenge." << std::endl;
	return (*this);
}

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout	<< "SC4V-TP " << name << " attacks " << target << " at range, "
				<< "causing " << ranged_dmg << " points of damage !"
				<< std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout	<< "SC4V-TP " << name << " attacks " << target << " at melee, "
				<< "causing " << ranged_dmg << " points of damage !"
				<< std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	dmg = std::max((int)(amount - armor), 0);
	if ((long int)health - (long int)dmg < 0)
		health = 0;
	else
		health -= dmg;
	std::cout	<< "SC4V-TP " << name << " takes " << dmg << " points of dmg."
				<< " I have " << health << " hitpoints." << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (health + amount > max_health)
		health = max_health;
	else
		health += amount;
	std::cout	<< "SC4V-TP " << name << " takes " << amount
				<< " points of repair."
				<< " I have " << health << " hitpoints." << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string pool[] = { "Random1 challenge", "Random2 challenge",
		"Random3 challenge", "Random4 challenge", "Random5 challenge" };
	std::cout	<< "SC4V-TP challenges " << target << ": " << pool[rand() % 5]
				<< std::endl;
}
