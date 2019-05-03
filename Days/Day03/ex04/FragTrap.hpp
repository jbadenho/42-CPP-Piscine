/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <jcasian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:07:43 by jcasian           #+#    #+#             */
/*   Updated: 2019/05/03 15:56:27 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
	/* Constructors & Destructors */
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap(void);

	/* Operators overload */
	FragTrap		&operator=(FragTrap const &rhs);

	// Attacks
	void	vaulthunter_dot_exe(std::string const & target);
	

protected:
	FragTrap(void);
	
	static int const 		_nAttacks;

};

#endif