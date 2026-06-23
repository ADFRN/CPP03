/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:11 by afournie          #+#    #+#             */
/*   Updated: 2026/06/23 15:45:34 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
	std::string	name;
	int			hit_pts;
	int			energy_pts;
	int			attack_dmg;

	public:
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
		~ClapTrap();

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amout);

		void getHP() const;
		void getEP() const;
		void getAD() const;
};

#endif
