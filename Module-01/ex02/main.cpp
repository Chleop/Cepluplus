/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 15:05:05 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
// # include <iomanip>
# include <string>
// # include <fstream>

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << std::endl;
    std::cout << bold_on << "Memory address of the string variable : " << bold_off << &str << std::endl;
    std::cout << bold_on << "Memory address held by stringPTR      : " << bold_off << ptr << std::endl;
    std::cout << bold_on << "Memory address held by stringREF      : " << bold_off << &ref << std::endl;
    std::cout << std::endl;
    std::cout << bold_on << "Value of the string variable  : " << bold_off << str << std::endl;
    std::cout << bold_on << "Value pointed to by stringPTR : " << bold_off << *ptr << std::endl;
    std::cout << bold_on << "Value pointed to by stringREF : " << bold_off << ref << std::endl;
    std::cout << std::endl;
    return 0;
}
