/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:15 by afournie          #+#    #+#             */
/*   Updated: 2026/06/23 15:51:39 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->attack_dmg = 0;
	std::cout << this->name << " created" << std::endl;
	return ;
}
ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destroyed" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_pts <= 0)
	{
		std::cout << this->name << " can't attack, he's dead" << std::endl;
		return;
	}
	if (this->energy_pts < 1)
	{
		std::cout << this->name << " can't attack, no more energy left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " causing ";
	std::cout << this->attack_dmg;
	std::cout << " points of damage!" << std::endl;
	this->energy_pts -= 1;
	return ;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_pts <= 0)
	{
		std::cout << this->name << " already dead" << std::endl;
		return;
	}
	this->hit_pts -= amount;
	std::cout << this->name << " has taken " << amount << " damage" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_pts <= 0)
	{
		std::cout << this->name << " can't be repaired, he's dead" << std::endl;
		return;
	}
	if (this->energy_pts < 1)
	{
		std::cout << this->name << " can't be repaired, no more energy left" << std::endl;
		return ;
	}
	this->hit_pts += amount;
	this->energy_pts -= 1;
	std::cout << this->name << " just repaired " << amount << " health" << std::endl;
	return ;
}

void ClapTrap::getHP() const
{
	std::cout << this->name << " have " << this->hit_pts << " hp" << std::endl;
}

void ClapTrap::getEP() const
{
	std::cout << this->name << " have " << this->energy_pts << " energy" << std::endl;
}

void ClapTrap::getAD() const
{
	std::cout << this->name << " have " << this->attack_dmg << " attack dmg" << std::endl;
}

