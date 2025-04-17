/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:55:06 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/18 00:07:40 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fracBits = 8;

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intVal) 
{
	// std::cout << "Int constructor called" << std::endl;
	_value = intVal << _fracBits;
}

Fixed::Fixed(const float floatVal)
{
	// std::cout << "Float constructor called" << std::endl;
	_value = static_cast<int>(roundf(floatVal * (1 << _fracBits)));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed & Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat() const
{
	return static_cast<float>(_value) / (1 << _fracBits);
}

int	Fixed::toInt() const
{
	return _value >> _fracBits;
}


// Comparison-----------------------------------------------------------------------
bool Fixed::operator>(Fixed const &other) const { return _value > other._value; }
bool Fixed::operator<(Fixed const &other) const { return _value < other._value; }
bool Fixed::operator>=(Fixed const &other) const { return _value >= other._value; }
bool Fixed::operator<=(Fixed const &other) const { return _value <= other._value; }
bool Fixed::operator==(Fixed const &other) const { return _value == other._value; }
bool Fixed::operator!=(Fixed const &other) const { return _value != other._value; }


// Arithmetic-----------------------------------------------------------------------
Fixed Fixed::operator+(Fixed const &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}


// Increment / Decrement-----------------------------------------------------------
Fixed &Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_value++;
	return temp;
}

Fixed &Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_value--;
	return temp;
}


// min / max----------------------------------------------------------------------
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}


// Insertion overload-------------------------------------------------------------
std::ostream & operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}