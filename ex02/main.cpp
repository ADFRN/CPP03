/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:08 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 16:30:24 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap a("CL4P");

    std::cout << "\n=== Creating FragTrap ===" << std::endl;
    FragTrap b("FR4G");

    std::cout << "\n=== ClapTrap tests ===" << std::endl;
    a.attack("dummy");
    a.takeDamage(5);
    a.beRepaired(3);

    std::cout << "\n=== FragTrap tests ===" << std::endl;
    b.attack("enemy");
    b.takeDamage(40);
    b.beRepaired(20);

    std::cout << "\n=== Special ability ===" << std::endl;
    b.highFivesGuys();

    std::cout << "\n=== Energy drain test ===" << std::endl;

    for (int i = 0; i < 110; i++)
        b.attack("endless target");

    std::cout << "\n=== End of main ===" << std::endl;

    return 0;
}
