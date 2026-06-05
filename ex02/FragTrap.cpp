/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:19:54 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 16:45:42 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << name << " FragTrap created" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energy_pts < 1)
	{
		std::cout << this->name << " can't attack, no more energy left" << std::endl;
		return ;
	}
	std::cout << "FragTrap ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " causing ";
	std::cout << this->attack_dmg;
	std::cout << " points of damage!" << std::endl;
	this->energy_pts -= 1;
	return ;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "Positive high-fives request" << std::endl;
	return ;
}
