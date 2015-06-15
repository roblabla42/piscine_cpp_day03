/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 19:35:18 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 20:22:42 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

class SuperTrap : public FragTrap, public NinjaTrap
{
	SuperTrap();

public:
	SuperTrap(SuperTrap const &copy);
	SuperTrap(std::string name);
	virtual ~SuperTrap();

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
	SuperTrap	&operator=(SuperTrap const &rhs);
};

#endif
