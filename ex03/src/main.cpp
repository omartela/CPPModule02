/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:05:45 by omartela          #+#    #+#             */
/*   Updated: 2025/01/09 09:05:47 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{
    bsp(Point(3.0, 2.0),Point(5.0, 3.0), Point(6.0,1.0), Point(2.0, 2.0));
}