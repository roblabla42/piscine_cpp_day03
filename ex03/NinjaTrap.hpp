/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 18:44:54 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 19:30:22 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	NinjaTrap();

public:
	NinjaTrap(NinjaTrap const &copy);
	NinjaTrap(std::string name);
	virtual ~NinjaTrap();

	NinjaTrap	&operator=(NinjaTrap const &rhs);

	void		ninjaShoebox(NinjaTrap const &trap);
	void		ninjaShoebox(FragTrap const &trap);
	void		ninjaShoebox(ScavTrap const &trap);
};
#endif
