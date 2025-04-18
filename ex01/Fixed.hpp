/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:55:15 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/18 13:18:30 by jpancorb         ###   ########.fr       */
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
		Fixed(const int intVal);				// Const int constructor
		Fixed(const float floatVal);			// Const float constructor
		Fixed(const Fixed &other);				// Copy constructor
		Fixed &	operator=(const Fixed &other);	// Copy assignment operator
		~Fixed();								// Destructor

		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat() const;
		int		toInt() const;
};

// Insertion operator overload
std::ostream & operator<<(std::ostream &out, const Fixed &fixed);

#endif // FIXED_H