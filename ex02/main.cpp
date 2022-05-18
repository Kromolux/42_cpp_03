/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:12:45 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:21:39 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");
	FragTrap	trapC("Paul");

	trapC.highFivesGuys();
	trapA.attack(trapB.getName());
	
	trapB.guardGate();
	trapC.attack(trapA.getName());
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
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	return (0);
}