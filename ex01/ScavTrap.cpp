/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:43:51 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 16:46:01 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << name << " ScavTrap created" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_pts < 1)
	{
		std::cout << this->name << " can't attack, no more energy left" << std::endl;
		return ;
	}
	std::cout << "Scavtrap ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " causing ";
	std::cout << this->attack_dmg;
	std::cout << " points of damage!" << std::endl;
	this->energy_pts -= 1;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	return ;
}
