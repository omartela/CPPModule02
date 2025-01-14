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
#include <cmath>

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const int newValue) : _value(newValue << _fractionalbits) {}

Fixed::Fixed(const float newValue) : _value(static_cast<int>(std::roundf(newValue * (1 << _fractionalbits)))) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &other)
{
    this->operator=(other);
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        _value = other._value;
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
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
    fixed._value = (this->_value * other._value) >> _fractionalbits;
    return (fixed);
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed fixed;
    fixed._value = (this->_value << _fractionalbits) / other._value;
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