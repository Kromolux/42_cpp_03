/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:37:44 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:27:59 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = _initHitPoints;
	this->_energyPoints = _initEnergyPoints;
	this->_attackDamage = _initAttackDamage;
	std::cout << "FragTrap " << COLOR_GREEN << name << COLOR_DEFAULT << " was set";
	status();
	std::cout << std::endl;
}

FragTrap::FragTrap(FragTrap const & input) : ClapTrap(input._name)
{
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	std::cout << "FragTrap " << COLOR_GREEN << input._name << COLOR_DEFAULT << " was copied and set";
	status();
	std::cout << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & input)
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " has been destroyed\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << COLOR_MAGENTA << this->_name << COLOR_DEFAULT;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout	<< " is giving high fives!\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to give high fives, but has no energyPoints left to perform guardGate!\n";
	}
	else
	{
		std::cout	<< " tried to give high fives, but is already destroyed!\n";
	}
}

void	FragTrap::status(void)
{
	std::cout	<< " =<[HP (" << COLOR_GREEN << this->_hitPoints << COLOR_DEFAULT << "/" << COLOR_GREEN << _initHitPoints << COLOR_DEFAULT
				<< ") EP (" << COLOR_YELLOW << this->_energyPoints << COLOR_DEFAULT << "/" << COLOR_YELLOW << _initEnergyPoints << COLOR_DEFAULT
				<< ") AD (" << COLOR_RED << this->_attackDamage << COLOR_DEFAULT << ")]>=";
}
