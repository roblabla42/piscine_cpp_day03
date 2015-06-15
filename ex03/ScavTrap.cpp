/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:18:38 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 18:39:26 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20, 15, 3, "")
{
	std::cout << "SC4V-TP default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20, 15, 3, name)
{
	std::cout << "SC4V-TP " << name << " ready for challenge." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	std::cout	<< "SC4V-TP clone " << this->name << " ready for challenge."
				<< std::endl;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "SC4V-TP " << name << " moved into challenge." << std::endl;
	return (*this);
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string pool[] = { "Random1 challenge", "Random2 challenge",
		"Random3 challenge", "Random4 challenge", "Random5 challenge" };
	std::cout	<< "SC4V-TP challenges " << target << ": " << pool[rand() % 5]
				<< std::endl;
}
