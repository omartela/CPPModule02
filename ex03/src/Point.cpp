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

Point::Point() : x(0), y(0) {} 
Point::Point(float newX, float newY) : x(newX), y(newY) {}
Point::~Point () {}

Point::Point(const Point &other) : Fixed(other), x(other.x), y(other.y) {}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        this->setRawBits(other.getRawBits());
    }
    return (*this);
}

Fixed Point::getX() const
{
    return (x);
}

Fixed Point::getY() const
{
    return (y);
}

Point Point::computeVector(const Point a, const Point b)
{
    Point vectorab((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
    return (vectorab);
}

Fixed Point::computeCrossProduct(const Point a, const Point b)
{
    Fixed cross_product;

    cross_product = (a.getX() * b.getY()) - (a.getY() * b.getX());
    return (cross_product);
}

