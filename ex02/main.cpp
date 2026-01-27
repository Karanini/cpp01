/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:27:29 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 13:33:06 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string hi_brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &hi_brain;
    std::string &stringREF = hi_brain;

    std::cout << "memory address of the string variable: " << (void *)hi_brain << std::endl;
}