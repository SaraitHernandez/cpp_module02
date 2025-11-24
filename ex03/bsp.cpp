/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarherna <sarherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 00:00:00 by sarherna          #+#    #+#             */
/*   Updated: 2025/11/19 00:00:00 by sarherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed x)
{
	if (x < Fixed(0))
		return x * Fixed(-1);
	return x;
}

static Fixed area(Point const a, Point const b, Point const c)
{
	Fixed result = ((a.getX() * (b.getY() - c.getY())) +
					(b.getX() * (c.getY() - a.getY())) +
					(c.getX() * (a.getY() - b.getY()))) / Fixed(2);
	return abs(result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaABC = area(a, b, c);
	Fixed areaPAB = area(point, a, b);
	Fixed areaPBC = area(point, b, c);
	Fixed areaPCA = area(point, c, a);

	if (areaPAB == Fixed(0) || areaPBC == Fixed(0) || areaPCA == Fixed(0))
		return false;

	return (areaABC == (areaPAB + areaPBC + areaPCA));
}


