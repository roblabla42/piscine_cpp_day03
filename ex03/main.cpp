/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 16:10:45 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/19 20:01:24 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	FragTrap	ft("#YOLO");
	FragTrap	ft2(ft);
	FragTrap	ft3 = ft2;

	ScavTrap	st("#SWAG");
	ScavTrap	st2(st);
	ScavTrap	st3 = st2;

	NinjaTrap	nt("#NINJ");
	NinjaTrap	nt2(nt);
	NinjaTrap	nt3 = nt2;

	ft.rangedAttack("other");
	ft.meleeAttack("other");
	ft.takeDamage(32);
	ft2.takeDamage(150);
	ft3.takeDamage(0);
	ft3.beRepaired(0);
	ft3.beRepaired(150);
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	
	st.rangedAttack("other");
	st.meleeAttack("other");
	st.takeDamage(32);
	st2.takeDamage(150);
	st3.takeDamage(0);
	st3.beRepaired(0);
	st3.beRepaired(150);
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");

	nt.rangedAttack("other");
	nt.meleeAttack("other");
	nt.takeDamage(32);
	nt2.takeDamage(150);
	nt3.takeDamage(0);
	nt3.beRepaired(0);
	nt3.beRepaired(150);
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(nt);
}
