/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:34:32 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:27:16 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const & input);
	FragTrap & operator=(FragTrap const & input);
	~FragTrap(void);

	void	highFivesGuys(void);

private:

	void	status(void);

protected:

	static unsigned int const _initHitPoints = 100;
	static unsigned int const _initEnergyPoints = 100;
	static unsigned int const _initAttackDamage = 30;

};

#endif