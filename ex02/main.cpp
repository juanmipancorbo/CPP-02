/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 00:30:37 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/17 23:20:20 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed(5.05f) * Fixed(2) );

	std::cout << a << std::endl;					// prints 0
	std::cout << ++a << std::endl;					// pre-increment: adds 1/256
	std::cout << a << std::endl;					// same value
	std::cout << a++ << std::endl;					// post-increment: prints old, then adds
	std::cout << a << std::endl;					// new value
	std::cout << b << std::endl;					// prints result of 5.05*2
	std::cout << Fixed::max(a, b) << std::endl;		// prints the greater one

	return 0;
}