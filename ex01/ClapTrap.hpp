/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:43:49 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:08:08 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_WHITE "\033[37m"

class	ClapTrap
{

public:

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & input);
	ClapTrap & operator=(ClapTrap const & input);
	~ClapTrap(void);

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName(void);

protected:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

private:

	void		constructorCall(std::string type);
	void		status(void);

	static unsigned int const _initHitPoints = 10;
	static unsigned int const _initEnergyPoints = 10;
	static unsigned int const _initAttackDamage = 0;
};

#endif