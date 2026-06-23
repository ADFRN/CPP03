/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:08 by afournie          #+#    #+#             */
/*   Updated: 2026/06/23 15:50:44 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "=== Creating ClapTrap ===" << std::endl;
	ClapTrap a("CL4P-TP");
	a.getAD();
	a.getEP();
	a.getHP();
	std::cout << std::endl;

	std::cout << "=== Creating ScavTrap ===" << std::endl;
	ScavTrap b("SC4V-TP");
	b.getAD();
	b.getEP();
	b.getHP();
	std::cout << std::endl;

	std::cout << "=== Testing ClapTrap actions ===" << std::endl;
	a.attack("target dummy");
	a.takeDamage(5);
	a.getHP();
	a.beRepaired(3);
	a.getHP();
	a.getEP();
	std::cout << std::endl;

	std::cout << "=== Testing ScavTrap actions ===" << std::endl;
	b.attack("bandit");
	b.takeDamage(30);
	b.getHP();
	b.beRepaired(20);
	b.getHP();
	b.getEP();
	std::cout << std::endl;

	std::cout << "=== Special ability ===" << std::endl;
	b.guardGate();
	std::cout << std::endl;

	std::cout << "=== Energy depletion test ===" << std::endl;
	for (int i = 0; i < 55; i++)
	{
		b.attack("endless target");
		b.getEP();
	}
	return (0);
}
