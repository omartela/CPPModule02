/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 07:13:32 by omartela          #+#    #+#             */
/*   Updated: 2025/01/09 07:13:34 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Fixed
{
    private:
        int _value;
        static const int _fractionalbits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed   &operator=(const Fixed &other);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        bool    operator>(const Fixed &other);
        bool    operator<(const Fixed &other);
        bool    operator>=(const Fixed &other);
        bool    operator<=(const Fixed &other);
        bool    operator==(const Fixed &other);
        bool    operator!=(const Fixed &other);
        Fixed   &operator+(const Fixed &other);
        Fixed   &operator-(const Fixed &other);
        Fixed   &operator*(const Fixed &other);
        Fixed   &operator/(const Fixed &other);
        Fixed   &operator++();
        Fixed   &operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);
        static  Fixed &min(Fixed &F1, Fixed &F2);
        static  const Fixed &min(const Fixed &F1, const Fixed &F2);
        static  Fixed &max(Fixed &F1, Fixed &F2);
        static  const Fixed &max(const Fixed &F1, const Fixed &F2);

};