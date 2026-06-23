/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:08 by afournie          #+#    #+#             */
/*   Updated: 2026/06/23 16:01:13 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
// #include "ScavTrap.hpp"
// #include "FragTrap.hpp"

// int main()
// {
// 	std::cout << "=== Creating ClapTrap ===" << std::endl;
// 	ClapTrap a("CL4P-TP");
// 	a.getAD();
// 	a.getEP();
// 	a.getHP();
// 	std::cout << std::endl;

// 	std::cout << "=== Creating FragTrap ===" << std::endl;
// 	FragTrap b("FR4G");
// 	b.getAD();
// 	b.getEP();
// 	b.getHP();
// 	std::cout << std::endl;

// 	std::cout << "=== ClapTrap tests ===" << std::endl;
// 	a.attack("dummy");
// 	a.takeDamage(5);
// 	a.getHP();
// 	a.beRepaired(3);
// 	a.getHP();
// 	a.getEP();
// 	std::cout << std::endl;

// 	std::cout << "=== FragTrap tests ===" << std::endl;
// 	b.attack("enemy");
// 	b.takeDamage(40);
// 	b.getHP();
// 	b.beRepaired(20);
// 	b.getHP();
// 	b.getEP();
// 	std::cout << std::endl;

// 	std::cout << "=== Special ability ===" << std::endl;
// 	b.highFivesGuys();

// 	std::cout << "=== Energy drain test ===" << std::endl;

// 	for (int i = 0; i < 110; i++)
// 	{
// 		b.attack("endless target");
// 		b.getEP();
// 	}
// 	return 0;
// }


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
