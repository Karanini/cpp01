/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:51:47 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 13:16:15 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


class Zombie
{
private:
    std::string _name;
public:
    ~Zombie();
    void        announce(void);
    void        setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
 
typedef Zombie  z;

