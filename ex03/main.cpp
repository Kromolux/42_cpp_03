/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:12:45 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:38:25 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");
	FragTrap	trapC("Paul");
	DiamondTrap	trapD("Diamond");
	
	trapD.attack("everyone!");
	trapD.whoAmI();
	trapD.highFivesGuys();
	trapD.guardGate();
	
	trapC.highFivesGuys();
	trapC.attack(trapD.getName());
	
	trapD.guardGate();
	trapD.attack(trapC.getName());
	trapB.takeDamage(20);
	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapC.getName());
	trapC.takeDamage(7);
	trapC.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapC.attack(trapB.getName());
	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapC.getName());
	trapC.takeDamage(7);
	trapC.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapC.attack(trapB.getName());
	trapC.beRepaired(5);
	trapA.beRepaired(3);
	trapB.beRepaired(3);
	trapD.beRepaired(6);
	return (0);
}
