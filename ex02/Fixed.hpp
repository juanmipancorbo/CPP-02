/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:55:15 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/17 22:56:07 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


class Fixed
{
	private:
		int					_value;
		static const int	_fracBits;

	public:
		Fixed();								// Default constructor
		Fixed(const int intVal);
		Fixed(const float floatVal);
		Fixed(const Fixed &other);				// Copy constructor
		Fixed &	operator=(const Fixed &other);	// Copy assignment operator
		~Fixed();								// Destructor

		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat() const;
		int		toInt() const;

		// Comparison operators
		bool	operator>(Fixed const &other) const;
		bool	operator<(Fixed const &other) const;
		bool	operator>=(Fixed const &other) const;
		bool	operator<=(Fixed const &other) const;
		bool	operator==(Fixed const &other) const;
		bool	operator!=(Fixed const &other) const;

		// Arithmetic operators
		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		// Increment / Decrement
		Fixed & operator++();		// pre-increment
		Fixed	operator++(int);	// post-increment
		Fixed & operator--();		// pre-decrement
		Fixed	operator--(int);	// post-decrement

		// min / max (non-const and const overloads)
		static Fixed       &min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed       &max(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
};

// Insertion operator overload
std::ostream & operator<<(std::ostream &out, const Fixed &fixed);

#endif // FIXED_H