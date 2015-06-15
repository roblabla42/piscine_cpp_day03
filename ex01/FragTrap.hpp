/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:09:03 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 16:27:19 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

class FragTrap
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

	FragTrap();
public:
	FragTrap(FragTrap const &copy);
	FragTrap(std::string name);
	virtual ~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target);
};

#endif
