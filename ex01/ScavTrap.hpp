/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:09:03 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 16:35:42 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
	unsigned int	health;
	unsigned int	max_health;
	unsigned int	energy;
	unsigned int	max_energy;
	unsigned int	level;
	std::string		name;
	unsigned int	melee_dmg;
	unsigned int	ranged_dmg;
	unsigned int	armor;

	ScavTrap();
public:
	ScavTrap(ScavTrap const &copy);
	ScavTrap(std::string name);
	virtual ~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const &target);
};

#endif
