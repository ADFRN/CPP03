/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:09:11 by afournie          #+#    #+#             */
/*   Updated: 2026/06/24 10:36:16 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
	std::string	_name;
	int			_hit_pts;
	int			_energy_pts;
	int			_attack_dmg;

	public:
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap();

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amout);

		std::string getName() const;
		int getHP() const;
		int getEP() const;
		int getAD() const;
};

#endif
