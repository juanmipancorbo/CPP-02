/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:48:38 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/18 13:13:12 by jpancorb         ###   ########.fr       */
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
		Fixed(const Fixed &other);				// Copy constructor
		Fixed &	operator=(const Fixed &other);	// Copy assignment operator
		~Fixed();								// Destructor

		int		getRawBits() const;
		void	setRawBits(int const raw);
};


#endif // FIXED_H