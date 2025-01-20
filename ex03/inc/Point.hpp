/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:24:25 by omartela          #+#    #+#             */
/*   Updated: 2025/01/14 10:24:26 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Point.hpp"
#include "Fixed.hpp"

class Point : Fixed
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(); 
        Point(float newX, float newY);
        ~Point();
        Point(const Point &other);
        Point   &operator=(const Point &other) = delete;
        Fixed getX() const;
        Fixed getY() const;
};