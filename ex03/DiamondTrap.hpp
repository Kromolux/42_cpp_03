/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:47:37 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/18 20:30:42 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap

{

public:

	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & input);
	DiamondTrap & operator=(DiamondTrap const & input);
	~DiamondTrap(void);

	void	whoAmI(void);

private:

	void		status(void);
	std::string	_name;

};

#endif