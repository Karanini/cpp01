/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:51:47 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 18:06:19 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>
#include <iostream>


class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void        announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

typedef Zombie  z;

#endif

