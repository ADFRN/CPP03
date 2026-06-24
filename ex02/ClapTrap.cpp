/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:15 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 11:04:25 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_pts = 10;
	this->_energy_pts = 10;
	this->_attack_dmg = 0;
	std::cout << this->_name << " ClapTrap created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg)
{
	this->_name = name;
	this->_hit_pts = hit_pts;
	this->_energy_pts = energy_pts;
	this->_attack_dmg = attack_dmg;
	std::cout << "ClapTrap created" << std::endl;

	return ;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit_pts = other._hit_pts;
		_energy_pts = other._energy_pts;
		_attack_dmg = other._attack_dmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_pts <= 0)
	{
		std::cout << this->_name << " can't attack, he's dead" << std::endl;
		return;
	}
	if (this->_energy_pts < 1)
	{
		std::cout << this->_name << " can't attack, no more energy left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap ";
	std::cout << this->_name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " causing ";
	std::cout << this->_attack_dmg;
	std::cout << " points of damage!" << std::endl;
	this->_energy_pts -= 1;
	return ;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_pts <= 0)
	{
		std::cout << this->_name << " already dead" << std::endl;
		return;
	}
	if (amount >= static_cast<unsigned int>(_hit_pts))
		_hit_pts = 0;
	else
		_hit_pts -= amount;
	std::cout << this->_name << " has taken " << amount << " damage" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_pts <= 0)
	{
		std::cout << this->_name << " can't be repaired, he's dead" << std::endl;
		return;
	}
	if (this->_energy_pts < 1)
	{
		std::cout << this->_name << " can't be repaired, no more energy left" << std::endl;
		return ;
	}
	this->_hit_pts += amount;
	this->_energy_pts -= 1;
	std::cout << this->_name << " just repaired " << amount << " health" << std::endl;
	return ;
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHP() const
{
	return (this->_hit_pts);
}

int ClapTrap::getEP() const
{
	return (this->_energy_pts);
}

int ClapTrap::getAD() const
{
	return (this->_attack_dmg);
}

