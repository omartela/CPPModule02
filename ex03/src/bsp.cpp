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
    Point vectorab;
    Point vectorapoint;
    Point vectorbc;
    Point vectorbpoint;
    Point vectorca;
    Point vectorcpoint;
    Fixed crossprod_ab_point;
    Fixed crossprod_bc_point;
    Fixed crossprod_ca_point;


    vectorab = vectorab.computeVector(a, b);
    vectorapoint = vectorapoint.computeVector(a, point);
    vectorbc = vectorbc.computeVector(b, c);
    vectorbpoint = vectorbpoint.computeVector(b, point);
    vectorca = vectorca.computeVector(c, a);
    vectorcpoint = vectorcpoint.computeVector(c, point);

    crossprod_ab_point = vectorab.computeCrossProduct(vectorab, vectorapoint);
    crossprod_bc_point = vectorbc.computeCrossProduct(vectorbc, vectorbpoint);
    crossprod_ca_point = vectorca.computeCrossProduct(vectorca, vectorcpoint);

   if ((crossprod_ab_point >= 0 && crossprod_bc_point >= 0 && crossprod_ca_point >= 0) ||
        (crossprod_ab_point <= 0 && crossprod_bc_point <= 0 && crossprod_ca_point <= 0))
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
