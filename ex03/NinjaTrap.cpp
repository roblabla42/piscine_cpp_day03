/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 19:19:35 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 19:28:54 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 120, 60, 5, 0, "")
{
	std::cout << "NNJ4-TP default constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 120, 60, 5, 0, name)
{
	std::cout << "NNJ4-TP " << name << " ready for shinobi." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy) : ClapTrap(copy)
{
	std::cout << "NNJ4-TP clone " << name << " ready for shinobi." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "NNJ4-TP " << name << " moved into shinobi." << std::endl;
	return (*this);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const &trap)
{
	std::cout	<< "NNJ4-TP " << name << " says hello to his shinobi friend "
				<< trap.name << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap const &trap)
{
	std::cout	<< "NNJ4-TP " << name << " says hello to FragTrap friend"
				<< std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap const &trap)
{
	std::cout	<< "NNJ4-TP " << name << " doesn't really like ScavTrap."
				<< std::endl;
}
