/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:18:38 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/19 19:34:41 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() :
	health(100), max_health(100), energy(100), max_energy(100), level(1),
	name(""), melee_dmg(30), ranged_dmg(20), armor(5)
{
	std::cout << "FR4G-TP default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) :
	health(100), max_health(100), energy(100), max_energy(100), level(1),
	name(name), melee_dmg(30), ranged_dmg(20), armor(5)
{
	std::cout << "FR4G-TP " << name << " ready for action." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
	std::cout << "FR4G-TP clone " << name << " ready for action." << std::endl;
}

FragTrap::~FragTrap()
{
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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
	std::cout << "FR4G-TP " << name << " moved into action." << std::endl;
	return (*this);
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout	<< "FR4G-TP " << name << " attacks " << target << " at range, "
				<< "causing " << ranged_dmg << " points of damage !"
				<< std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout	<< "FR4G-TP " << name << " attacks " << target << " at melee, "
				<< "causing " << melee_dmg << " points of damage !"
				<< std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	dmg = std::max((int)(amount - armor), 0);
	if ((long int)health - (long int)dmg < 0)
		health = 0;
	else
		health -= dmg;
	std::cout	<< "FR4G-TP " << name << " takes " << dmg << " points of dmg."
				<< " I have " << health << " hitpoints." << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (health + amount > max_health)
		health = max_health;
	else
		health += amount;
	std::cout	<< "FR4G-TP " << name << " takes " << amount
				<< " points of repair."
				<< " I have " << health << " hitpoints." << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (energy < 25)
	{
		std::cout	<< "FR4G-TP " << name << " doesn't have enough energy!"
					<< std::endl;
		return;
	}
	energy -= 25;
	std::string pool[] = { "Gizmo Beam", "Shredding Power", "Turbine Rush",
		"Bolt Attack", "Bane Bullet" };
	std::cout	<< "FR4G-TP " << name << " uses " << pool[rand() % 5] << " on "
				<< target << std::endl;
}
