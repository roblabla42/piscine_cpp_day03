/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:18:38 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 18:38:23 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30, 20, 5, "")
{
	std::cout << "FR4G-TP default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 30, 20, 5, name)
{
	std::cout << "FR4G-TP " << name << " ready for action." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	std::cout << "FR4G-TP clone " << name << " ready for action." << std::endl;
}

FragTrap::~FragTrap()
{
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "FR4G-TP " << name << " moved into action." << std::endl;
	return (*this);
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
