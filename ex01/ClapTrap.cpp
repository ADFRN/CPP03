/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:15 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 16:22:44 by afournie         ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg)
{
	this->name = name;
	this->hit_pts = hit_pts;
	this->energy_pts = energy_pts;
	this->attack_dmg = attack_dmg;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destroyed" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
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
	this->hit_pts -= amount;
	std::cout << this->name << " has taken " << amount << " damage" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
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
