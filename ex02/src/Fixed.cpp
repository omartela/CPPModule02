/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:05:59 by omartela          #+#    #+#             */
/*   Updated: 2025/01/09 09:06:00 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(other);
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _value = other.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

bool Fixed::operator>(const Fixed &other)
{
    if (this->_value > other._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator<(const Fixed &other)
{
    if (this->_value < other._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator>=(const Fixed &other)
{
    if (this->_value >= other._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator<=(const Fixed &other)
{
    if (this->_value <= other._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator!=(const Fixed &other)
{
    if (this->_value != other._value)
        return (true);
    else
        return (false);
}

bool Fixed::operator==(const Fixed &other)
{
    if (this->_value == other._value)
        return (true);
    else
        return (false);
}

Fixed &Fixed::operator+(const Fixed &other)
{
}

Fixed &Fixed::operator-(const Fixed &other)
{
}

Fixed &Fixed::operator*(const Fixed &other)
{
}

Fixed &Fixed::operator/(const Fixed &other)
{
}

Fixed &Fixed::operator++()
{

}

Fixed &Fixed::operator--()
{
}

Fixed Fixed::operator++(int)
{

}

Fixed Fixed::operator--(int)
{

}

Fixed &Fixed::min(Fixed &F1, Fixed &F2)
{

}

const Fixed &Fixed::min(const Fixed &F1, const Fixed &F2)
{

}

Fixed &Fixed::max(Fixed &F1, Fixed &F2)
{

}

const Fixed &Fixed::max(const Fixed &F1, const Fixed &F2)
{

}