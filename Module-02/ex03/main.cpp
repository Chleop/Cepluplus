/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:39 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/10 18:27:49 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area (a.getX().toInt(), a.getY().toInt(), b.getX().toInt(), b.getY().toInt(), c.getX().toInt(), c.getY().toInt());
    float A1 = area (point.getX().toInt(), point.getY().toInt(), b.getX().toInt(), b.getY().toInt(), c.getX().toInt(), c.getY().toInt());
    float A2 = area (a.getX().toInt(), a.getY().toInt(), point.getX().toInt(), point.getY().toInt(), c.getX().toInt(), c.getY().toInt());
    float A3 = area (a.getX().toInt(), a.getY().toInt(), b.getX().toInt(), b.getY().toInt(), point.getX().toInt(), point.getY().toInt());
    if(A == A1 + A2 + A3)
        return true;
    return false;
}

int main( void )
{
    Point a(0, 0);
    Point b(20, 0);
    Point c(10, 30);
    Point point(10, 15);

    std::cout << bsp(a, b, c, point) << std::endl;
    return 0;
}