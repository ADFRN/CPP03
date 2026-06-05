/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:08 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 16:17:26 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "=== Creating ClapTrap ===" << std::endl;
	ClapTrap a("CL4P-TP");
	std::cout << "\n=== Creating ScavTrap ===" << std::endl;
	ScavTrap b("SC4V-TP");
	std::cout << "\n=== Testing ClapTrap actions ===" << std::endl;
	a.attack("target dummy");
	a.takeDamage(5);
	a.beRepaired(3);
	std::cout << "\n=== Testing ScavTrap actions ===" << std::endl;
	b.attack("bandit");
	b.takeDamage(30);
	b.beRepaired(20);
	std::cout << "\n=== Special ability ===" << std::endl;
	b.guardGate();
	std::cout << "\n=== Energy depletion test ===" << std::endl;
	for (int i = 0; i < 55; i++)
		b.attack("endless target");
	std::cout << "\n=== End of main ===" << std::endl;
	return (0);
}
