/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 19:57:09 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int transfer_and_replace(char *argv[])
{
    std::ifstream   ifs((std::string)argv[1]);
    std::ofstream   ofs((std::string)argv[1] + ".replace");
    std::string     str;
    size_t          location;
    
    // !!!!!!!!!!!!!!!!!!!!! verifier que le fichier existe

    std::getline(ifs, str);
    while(ifs.eof() == false)
    {
        while(1)
        {
            location = str.find(argv[2]);
            if(location != std::string::npos)
            {
                str.erase(location, sizeof(argv[2]) - 1);
                str.insert(location, argv[3]);
            }
            else
                break;
        }
        ofs << str << std::endl;
        std::getline(ifs, str);
    }
    while(1)
    {
        location = str.find(argv[2]);
        if(location != std::string::npos)
        {
            str.erase(location, sizeof(argv[2]) - 1);
            str.insert(location, argv[3]);
        }
        else
            break;
    }
    ofs << str << std::endl;
    std::getline(ifs, str);
    ifs.close();
    ofs.close();
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cout << "Wrong input arguments\nUsage: ./exec_file <filename> <string1> <string2>" << std::endl;
    else
        transfer_and_replace(argv);
    return 0;
}
