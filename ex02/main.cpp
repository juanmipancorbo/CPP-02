/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 00:30:37 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/18 00:57:22 by jpancorb         ###   ########.fr       */
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


	// My tests
	Fixed const c(1.5f);
	Fixed const d(2.5f);
	Fixed 		e(256);
	Fixed 		f(4);


	std::cout << "\nMy tests: -------------------------------" << std::endl;
	std::cout << "c = 1.5f\nd = 2.5f\ne = 3\nf = 4\n" << std::endl;

	std::cout << "\nComparison operators:" << std::endl;
	std::cout << "c > d  ->   " << bool (c > d) << std::endl;
	std::cout << "c < d  ->   " << bool (c < d) << std::endl;
	std::cout << "c >= d ->   " << bool (c >= d) << std::endl;
	std::cout << "c <= d ->   " << bool (c <= d) << std::endl;
	std::cout << "c == c ->   " << bool (c == c) << std::endl;
	std::cout << "d != d ->   " << bool (d != d) << std::endl;

	std::cout << "\nArithmetic operators:" << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "d / c = " << c / d << std::endl;

	std::cout << "\nIncrement / Decrement:" << std::endl;
	std::cout << "++e = " << ++e << std::endl;
	std::cout << "e++ = " << e++ << " / e = " << e << std::endl;
	// std::cout <<  << std::endl;
	// std::cout <<  << std::endl;

	// std::cout << "\nMin / Max:" << std::endl;
	// std::cout <<  << std::endl;
	// std::cout <<  << std::endl;

	return 0;
}