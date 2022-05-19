/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:28:45 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:28:51 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{

public:

	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & input);
	ScavTrap & operator=(ScavTrap const & input);
	~ScavTrap(void);

	void	attack(const std::string & target);
	void	guardGate(void);

private:

	void	status(void);

protected:

	static unsigned int const _initHitPoints = 100;
	static unsigned int const _initEnergyPoints = 50;
	static unsigned int const _initAttackDamage = 20;

};

#endif