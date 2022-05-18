/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:12:45 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:13:15 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");

	trapB.guardGate();
	trapA.attack(trapB.getName());
	trapB.takeDamage(20);
	trapA.attack(trapB.getName());
	trapB.takeDamage(20);
	trapB.attack(trapA.getName());
	trapA.takeDamage(7);
	trapA.beRepaired(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());
	trapA.takeDamage(7);
	trapA.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapA.attack(trapB.getName());
	trapB.beRepaired(5);
	trapA.beRepaired(3);

	return (0);
}