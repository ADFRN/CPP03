/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:43:51 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 11:02:31 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap created" << std::endl;
	this->_guard = false;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_guard = other._guard;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hit_pts <= 0)
	{
		std::cout << _name << " can't attack, he's dead" << std::endl;
		return;
	}
	if (this->_energy_pts < 1)
	{
		std::cout << this->_name << " can't attack, no more energy left" << std::endl;
		return ;
	}
	std::cout << "Scavtrap ";
	std::cout << this->_name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " causing ";
	std::cout << this->_attack_dmg;
	std::cout << " points of damage!" << std::endl;
	this->_energy_pts -= 1;
	return ;
}

void ScavTrap::guardGate()
{
	if (this->_guard)
	{
		std::cout << "ScavTrap is no longer in Gate keeper mode" << std::endl;
		this->_guard = false;
		return ;
	}
	else
	{
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
		this->_guard = true;
		return ;
	}
}
