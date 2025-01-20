/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:13:32 by omartela          #+#    #+#             */
/*   Updated: 2025/01/14 10:13:33 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point vectorab((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
    Point vectorapoint((point.getX() - a.getX()).toFloat(), (point.getY() - a.getY()).toFloat());
    Point vectorbc((c.getX() - b.getX()).toFloat(), (b.getY() - c.getY()).toFloat());
    Point vectorbpoint((point.getX() - b.getX()).toFloat(), (point.getY() - b.getY()).toFloat());
    Point vectorca((a.getX() - c.getX()).toFloat(), (a.getY() - c.getY()).toFloat());
    Point vectorcpoint((point.getX() - c.getX()).toFloat(), (point.getY() - c.getY()).toFloat());
    Fixed crossprod_ab_point((vectorab.getX() * vectorapoint.getY()) - (vectorab.getY() * vectorapoint.getX()));
    Fixed crossprod_bc_point((vectorbc.getX() * vectorbpoint.getY()) - (vectorbc.getY() * vectorbpoint.getX()));
    Fixed crossprod_ca_point((vectorca.getX() * vectorcpoint.getY()) - (vectorca.getY() * vectorcpoint.getX()));

   if ((crossprod_ab_point.getRawBits() >= 0 && crossprod_bc_point.getRawBits() >= 0 && crossprod_ca_point.getRawBits() >= 0) ||
        (crossprod_ab_point.getRawBits() <= 0 && crossprod_bc_point.getRawBits() <= 0 && crossprod_ca_point.getRawBits() <= 0))
    {
        std::cout << "Point is inside the triangle." << std::endl;
        return true;
    }
    else
    {
        std::cout << "Point is outside the triangle." << std::endl;
        return false;
    }

}
