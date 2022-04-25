/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:48:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/25 17:55:25 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int i;
    long unsigned int j;
    char c;
    std::string arg;

    if (argc < 2)
        arg = "* loud and unbearable feedback noise *";
    else
    {
        for (i = 1; i < argc; ++i)
        {
            arg = arg + ' ' + argv[i];
        }
    }
    for (j = 0; j < arg.length(); j++)
    {
        c = toupper(arg[j]);
        std::cout << c;
    }
    std::cout << std::endl;
    return 0;
}
