/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:13:21 by omartela          #+#    #+#             */
/*   Updated: 2025/01/14 10:13:22 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include <iostream>

Point::Point() : x(0), y(0) {} 
Point::Point(float newX, float newY) : x(newX), y(newY) {}
Point::~Point () {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Fixed Point::getX() const
{
    return (x);
}

Fixed Point::getY() const
{
    return (y);
}


