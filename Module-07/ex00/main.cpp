/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:02:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/08 18:25:25 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class A
{
public:
    A(void):_i(0){}
    A(int i):_i(i){}
    int get_i(void){return this->_i;}
    A & operator = (A & a){this->_i = a.get_i();return *this;}
    bool operator <= (A & a){return (this->_i <= a._i);}
    bool operator >= (A & a){return (this->_i >= a._i);}
    
private:
    int _i;
};

std::ostream & operator << (std::ostream & o, A & a)
{
    o << a.get_i() << std::endl;
    return o;
}

int main( void ) 
{
    int a = 2;
    int b = 3;
    
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    
    A e(2);
    A f(4);
    
    swap(e, f);
    std::cout << "e = " << e << "f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    
    return 0;
}