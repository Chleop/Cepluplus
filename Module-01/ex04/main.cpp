/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/05 13:31:48 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string    ft_replace(std::string str, std::string s1, std::string s2)
{
    size_t          location;

    location = str.find(s1);
    while(location != std::string::npos)
    {
        str.erase(location, (s1.length()));
        str.insert(location, s2);
        location = str.find(s1);
    }
    return str;
}

int transfer_and_replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   ifs(filename);
    std::ofstream   ofs(filename + ".replace");
    std::string     str;

    if(!ifs.is_open())
    {
        std::cout << "Error, cannot open file" << std::endl;
        return (1);
    }
    std::getline(ifs, str);
    while((ifs.eof() == false) || (!str.empty()))
    {
        if (s1.compare(s2) != 0)
            str = ft_replace(str, s1, s2);
        ofs << str;
        if ((ifs.eof() == true))
            break;
        ofs << std::endl;
        std::getline(ifs, str);
    }
    ifs.close();
    ofs.close();
    return 0;
}

int main(int argc, char *argv[])
{
    std::string filename;
    std::string s1;
    std::string s2;

    filename = (std::string)argv[1];
    s1 = (std::string)argv[2];
    s2 = (std::string)argv[3];
    if (argc != 4)
        std::cout << "Wrong input arguments\nUsage: ./exec_file <filename> <string1> <string2>" << std::endl;
    else
        transfer_and_replace(filename, s1, s2);
    return 0;
}
