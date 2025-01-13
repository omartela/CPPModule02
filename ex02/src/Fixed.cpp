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

Fixed::Fixed(const int newValue) : _value(newValue << _fractionalbits) 
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float newValue) : _value(static_cast<int>(newValue * (1 << _fractionalbits))) 
{
    std::cout << "Float constructor called" << std::endl;
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

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_value) / (1 << _fractionalbits));
}

int Fixed::toInt(void) const
{
    return (_value >> _fractionalbits);
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

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed fixed;
    fixed._value = this->_value + other._value;
    return (fixed);
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed fixed;
    fixed._value = this->_value - other._value;
    return (fixed);
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed fixed;
    fixed._value = this->_value * other._value;
    return (fixed);
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed fixed;
    fixed._value = this->_value / other._value;
    return (fixed);
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed fixed = *this;
    this->_value++;
    return (fixed);
}

Fixed Fixed::operator--(int)
{
    Fixed fixed = *this;
    this->_value--;
    return (fixed);
}

Fixed &Fixed::min(Fixed &F1, Fixed &F2)
{
    if (F1.getRawBits() < F2.getRawBits())
        return (F1);
    else
        return (F2);
}

const Fixed &Fixed::min(const Fixed &F1, const Fixed &F2)
{
    if (F1.getRawBits() < F2.getRawBits())
        return (F1);
    else
        return (F2);
}

Fixed &Fixed::max(Fixed &F1, Fixed &F2)
{
    if (F1.getRawBits() > F2.getRawBits())
        return (F1);
    else
        return (F2);
}

const Fixed &Fixed::max(const Fixed &F1, const Fixed &F2)
{
    if (F1.getRawBits() > F2.getRawBits())
        return (F1);
    else
        return (F2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}