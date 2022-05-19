/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:12:45 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 19:54:01 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo Boss");
	ClapTrap	trapB("John Dirty");


	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());
	trapA.takeDamage(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());

	trapA.takeDamage(5);
	trapA.attack(trapB.getName());
	trapA.beRepaired(1);
	
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	
	trapB.beRepaired(3);
	trapB.beRepaired(3);
	trapB.beRepaired(3);
	trapA.beRepaired(3);
	return (0);
}