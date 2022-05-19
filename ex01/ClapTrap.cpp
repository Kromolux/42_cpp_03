/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:50:28 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:05:38 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(_initHitPoints), _energyPoints(_initEnergyPoints), _attackDamage(_initAttackDamage)
{
	constructorCall("set");
}

ClapTrap::ClapTrap(ClapTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	constructorCall("copied");
}

ClapTrap & ClapTrap::operator=(ClapTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	constructorCall("assigned");
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " has been destroyed\n";
}

void	ClapTrap::attack(const std::string & target)
{
	std::cout	<< "ClapTrap " << COLOR_YELLOW << this->_name << COLOR_DEFAULT;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout	<< "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT;
	status();
	std::cout	<< " has taken " << COLOR_RED << amount << COLOR_DEFAULT << " points of damage!\n";
	if (this->_hitPoints <= 0)
	{
		std::cout	<< "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT;
		status();
		std::cout	<< " has taken to much damage and has been destroyed!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout	<< "ClapTrap " << COLOR_GREEN << this->_name << COLOR_DEFAULT;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		if (amount + _hitPoints >= _initHitPoints)
			this->_hitPoints = _initHitPoints;
		else
			this->_hitPoints += amount;
		std::cout	<< " repaired by " << COLOR_GREEN << amount << COLOR_DEFAULT << " hit points!\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to repair by " << COLOR_YELLOW << amount << COLOR_DEFAULT << " hit points"
					<< ", but has no energyPoints left to perform repair!\n";
	}
	else
	{
		std::cout	<< " tried to repair by "
					<< COLOR_YELLOW << amount << COLOR_DEFAULT << " hit points"
					<< ", but is already destroyed!\n";
	}
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

void		ClapTrap::constructorCall(std::string type)
{
	std::cout	<< "ClapTrap " << COLOR_GREEN << this->_name << COLOR_DEFAULT << " was " << type << " with";
	status();
	std::cout << std::endl;
}

void	ClapTrap::status(void)
{
	std::cout	<< " =<[HP (" << COLOR_GREEN << this->_hitPoints << COLOR_DEFAULT << "/" << COLOR_GREEN << _initHitPoints << COLOR_DEFAULT
				<< ") EP (" << COLOR_YELLOW << this->_energyPoints << COLOR_DEFAULT << "/" << COLOR_YELLOW << _initEnergyPoints << COLOR_DEFAULT
				<< ") AD (" << COLOR_RED << this->_attackDamage << COLOR_DEFAULT << ")]>=";
}
