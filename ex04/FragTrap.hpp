/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:09:03 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 20:00:44 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public virtual ClapTrap
{
	FragTrap();
public:
	FragTrap(FragTrap const &copy);
	FragTrap(std::string name);
	virtual ~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);

	void		vaulthunter_dot_exe(std::string const &target);
};

#endif
