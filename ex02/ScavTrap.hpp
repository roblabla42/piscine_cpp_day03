/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:09:03 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 18:34:02 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	ScavTrap();
public:
	ScavTrap(ScavTrap const &copy);
	ScavTrap(std::string name);
	virtual ~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		challengeNewcomer(std::string const &target);
};

#endif
