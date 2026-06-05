/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:08 by afournie          #+#    #+#             */
/*   Updated: 2026/06/05 15:40:56 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap test("test");

	for (int i = 0; i < 11; i++)
	{
		test.attack("quelqu'un");
		test.takeDamage(8);
		test.beRepaired(12);
	}

	return 0;
}
