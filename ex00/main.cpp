/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 16:10:45 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/14 16:27:35 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap	ft("#YOLO");
	FragTrap	ft2(ft);
	FragTrap	ft3 = ft2;

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
}
