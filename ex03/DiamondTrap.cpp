/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:51:52 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:36:15 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_initHitPoints;
	this->_energyPoints = ScavTrap::_initEnergyPoints;
	this->_attackDamage = FragTrap::_initAttackDamage;
	std::cout << "DiamondTrap " << COLOR_GREEN << name << COLOR_DEFAULT << " was set with";
	status();
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & input) : ClapTrap(input._name + "_clap_name"), FragTrap(input._name + "_clap_name"), ScavTrap(input._name + "_clap_name")
{
	*this = input;
	std::cout << "DiamondTrap " << COLOR_GREEN << input._name << COLOR_DEFAULT << " was copied and set with";
	status();
	std::cout << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	std::cout << "DiamondTrap " << COLOR_GREEN << input._name << COLOR_DEFAULT << " was assigned and set with";
	status();
	std::cout << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " has been destroyed\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout	<< "DiamondTrap " << COLOR_MAGENTA << this->_name << COLOR_DEFAULT;
	status();
	std::cout	<< " whoAmI called: "
				<< "Diamond name = " << this->_name
				<< " ClapTrap name = " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::status(void)
{
	std::cout	<< " =<[HP (" << COLOR_GREEN << this->_hitPoints << COLOR_DEFAULT << "/" << COLOR_GREEN << FragTrap::_initHitPoints << COLOR_DEFAULT
				<< ") EP (" << COLOR_YELLOW << this->_energyPoints << COLOR_DEFAULT << "/" << COLOR_YELLOW << ScavTrap::_initEnergyPoints << COLOR_DEFAULT
				<< ") AD (" << COLOR_RED << this->_attackDamage << COLOR_DEFAULT << ")]>=";
}
