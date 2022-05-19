/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:35:28 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:15:51 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = _initHitPoints;
	this->_energyPoints = _initEnergyPoints;
	this->_attackDamage = _initAttackDamage;
	std::cout << "ScavTrap " << COLOR_GREEN << name << COLOR_DEFAULT << " was set";
	status();
	std::cout << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & input) : ClapTrap(input._name)
{
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	std::cout << "ScavTrap " << COLOR_GREEN << input._name << COLOR_DEFAULT << " was copied and set";
	status();
	std::cout << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	std::cout << "ScavTrap " << COLOR_GREEN << input._name << COLOR_DEFAULT << " was assigned and set";
	status();
	std::cout << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " has been destroyed\n";
}

void	ScavTrap::attack(const std::string & target)
{
	std::cout	<< "ScavTrap " << COLOR_YELLOW << this->_name << COLOR_DEFAULT;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout	<< " attacks " << COLOR_RED << target << COLOR_DEFAULT
					<< ", causing " << COLOR_RED << this->_attackDamage << COLOR_DEFAULT << " points of damage!\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to attack " << target << ", but has no energyPoints left to perform attack!\n";
	}
	else
	{
		std::cout	<< " tried to attack " << target << ", but is already destroyed!\n";
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap " << COLOR_MAGENTA << this->_name << COLOR_DEFAULT;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout	<< " is now in Gate keeper mode\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to go in Gate keeper mode, but has no energyPoints left to perform guardGate!\n";
	}
	else
	{
		std::cout	<< " tried to go in Gate keeper mode, but is already destroyed!\n";
	}
}

void	ScavTrap::status(void)
{
	std::cout	<< " =<[HP (" << COLOR_GREEN << this->_hitPoints << COLOR_DEFAULT << "/" << COLOR_GREEN << _initHitPoints << COLOR_DEFAULT
				<< ") EP (" << COLOR_YELLOW << this->_energyPoints << COLOR_DEFAULT << "/" << COLOR_YELLOW << _initEnergyPoints << COLOR_DEFAULT
				<< ") AD (" << COLOR_RED << this->_attackDamage << COLOR_DEFAULT << ")]>=";
}
