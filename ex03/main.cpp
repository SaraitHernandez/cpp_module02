/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarherna <sarherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 00:00:00 by sarherna          #+#    #+#             */
/*   Updated: 2025/11/19 00:00:00 by sarherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(5.0f, 10.0f);

	Point p1(5.0f, 5.0f);		// Inside
	Point p2(0.0f, 0.0f);		// On vertex
	Point p3(5.0f, 0.0f);		// On edge
	Point p4(15.0f, 15.0f);		// Outside

	std::cout << "Triangle vertices: A(0,0), B(10,0), C(5,10)" << std::endl;
	std::cout << std::endl;

	std::cout << "Point (5,5) is ";
	if (bsp(a, b, c, p1))
		std::cout << "inside";
	else
		std::cout << "outside";
	std::cout << " the triangle" << std::endl;

	std::cout << "Point (0,0) is ";
	if (bsp(a, b, c, p2))
		std::cout << "inside";
	else
		std::cout << "outside";
	std::cout << " the triangle (vertex)" << std::endl;

	std::cout << "Point (5,0) is ";
	if (bsp(a, b, c, p3))
		std::cout << "inside";
	else
		std::cout << "outside";
	std::cout << " the triangle (edge)" << std::endl;

	std::cout << "Point (15,15) is ";
	if (bsp(a, b, c, p4))
		std::cout << "inside";
	else
		std::cout << "outside";
	std::cout << " the triangle" << std::endl;

	return 0;
}


