/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:51:47 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/26 18:08:20 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


class Zombie
{
private:
    std::string _name;
    void        announce(void);
public:
    Zombie(std::string name);
    ~Zombie();
};

typedef Zombie  z;

