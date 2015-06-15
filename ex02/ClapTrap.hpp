/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 17:09:55 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 18:37:25 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	unsigned int	health;
	unsigned int	max_health;
	unsigned int	energy;
	unsigned int	max_energy;
	unsigned int	level;
	std::string		name;
	unsigned int	melee_dmg;
	unsigned int	ranged_dmg;
	unsigned int	armor;

	ClapTrap();
public:
	ClapTrap(ClapTrap const &copy);
	ClapTrap(int health, int energy, int melee_dmg, int ranged_dmg,
		int armor, std::string name);
	virtual ~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
