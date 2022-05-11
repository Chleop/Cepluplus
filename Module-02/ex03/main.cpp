/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:39 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/11 12:00:28 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A = area (a.getX().toInt(), a.getY().toInt(), b.getX().toInt(), b.getY().toInt(), c.getX().toInt(), c.getY().toInt());
    float A1 = area (point.getX().toInt(), point.getY().toInt(), b.getX().toInt(), b.getY().toInt(), c.getX().toInt(), c.getY().toInt());
    float A2 = area (a.getX().toInt(), a.getY().toInt(), point.getX().toInt(), point.getY().toInt(), c.getX().toInt(), c.getY().toInt());
    float A3 = area (a.getX().toInt(), a.getY().toInt(), b.getX().toInt(), b.getY().toInt(), point.getX().toInt(), point.getY().toInt());
    if(A == A1 + A2 + A3)
        return true;
    return false;
}

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

void    print_answer(Point const a, Point const b, Point const c, Point const point, std::string pointstr)
{
    std::string answer;

    if (bsp(a, b, c, point))
        answer = "Yes !";
    else
        answer = "No !";
    std::cout   << bold_on                
                << "=> Is the point "
                << pointstr
                << " inside the triangle ABC?"
                << bold_off 
                << std::endl
                << std::setw(10)
                << answer
                << std::endl;
    return;
}

int main( void )
{
    Point const a(0, 0);
    Point const b(20, 0);
    Point const c(10, 30);
    Point const point1(10, 15);
    Point const point2(0, 15);

    std::cout   << std::endl
                << bold_on
                << "For Point A(0, 0), Point B(20, 0), Point C(10, 30), "
                << bold_off
                << std::endl;
    print_answer(a, b, c, point1, "(10, 15)");
    print_answer(a, b, c, point2, "(0, 15)");
    print_answer(a, b, c, point1, "C");
    std::cout   << std::endl;
    return 0;
}