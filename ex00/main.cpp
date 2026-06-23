/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:08 by afournie          #+#    #+#             */
/*   Updated: 2026/06/23 15:43:50 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap test("Cayde");

	test.getEP();
	test.getHP();
	test.getAD();
	for (int i = 0; i < 11; i++)
	{
		std::cout << std::endl;
		test.getEP();
		test.attack("Oryx");
		test.takeDamage(8);
		test.getHP();
		std::cout << std::endl;
		test.beRepaired(12);
		test.getHP();
	}

	return 0;
}
