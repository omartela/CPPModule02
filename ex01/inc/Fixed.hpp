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
        Fixed(const int newValue);
        Fixed(const float newValue);
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed   &operator=(const Fixed &other);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed   &operator<<(const)
};