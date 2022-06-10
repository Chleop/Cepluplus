/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:57:29 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/03 11:11:39 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"convert.hpp"

void invalid_input(std::string str)
{
    std::cout << "Invalid input : " << str << std::endl;
    exit(1);
}

void    ft_display_conversion(char *str, char c, int i, double d, float f)
{
    if (((std::string)str).compare("nan") == 0)
    {
        std::cout << "char:   " << "impossible" << std::endl;
        std::cout << "int:    " << "impossible" << std::endl;
    }
    else
    {
        if (isprint(c))
            std::cout << "char:  '" << c << "'" << std::endl;
        else
            std::cout << "char:   " << "Non displayable" << std::endl;
        if ((i == INT_MAX) || (i == INT_MIN))
            std::cout << "int:    overflow" << std::endl;
        else
            std::cout << "int:    " << i << std::endl;
    }
    std::cout.precision(1);
    std::cout << "float:  " << std::fixed << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << d << std::endl;
}

std::string ft_detect_type(char *str)
{
    std::string type;
    std::string s = str;
    int i = 0;

    if ((s.compare("nan") == 0) || (s.compare("-inf") == 0) || (s.compare("+inf") == 0))
        return "double";
    else if ((s.compare("nanf") == 0) || (s.compare("-inff") == 0) || (s.compare("+inff") == 0))
        return "float";
    if (isprint(str[i]))
    {
        if (isspace(str[i]))
            invalid_input("space within input");
        if (i == 0 && ((str[i] == '-') || (str[i] == '+')))
            i++;
        if (isdigit(str[i]))
        {
            while (isdigit(str[i]))
                i++;
            if (!str[i])
                type = "int";
            else if (str[i] == '.')
            {
                i++;
                while (isdigit(str[i]))
                    i++;
                if (!str[i])
                    type = "double";
                else if (str[i] == 'f')
                {
                    i++;
                    if (!str[i])
                        type = "float";
                    else
                        invalid_input("invalid float");
                }
                else
                    invalid_input("invalid double");
            }
            else
                invalid_input("invalid int");   
        }
        else if (!str[i + 1])
            type = "char";
        else
            invalid_input("not char nor int nor double nor float");
    }
    else
        invalid_input("not printable");
    return type;
}

void ft_convert_char(char *str)
{
    char    c;
    int     i;
    double  d;
    float   f;

    c = str[0];
    i = static_cast<int>(c);
    d = static_cast<double>(c);
    f = static_cast<float>(c);
    ft_display_conversion(str, c, i, d, f);
}

void ft_convert_int(char *str)
{
    char    c;
    int     i;
    double  d;
    float   f;
    double  temp;

    temp = strtol(str, NULL, 10);
    if (temp > INT_MAX)
        invalid_input("int is above int_max");
    if (temp < INT_MIN)
        invalid_input("int is below int_min");
    i = atoi(str);
    c = static_cast<int>(i);
    d = static_cast<double>(i);
    f = static_cast<float>(i);
    ft_display_conversion(str, c, i, d, f);
}

void ft_convert_double(char *str)
{
    char    c;
    int     i;
    double  d;
    float   f;
    std::string strstr;

    strstr = str;
    d = strtod(str, NULL);
    if (d == DBL_MIN)
        invalid_input("double is DBL_MIN or below DBL_MIN");
    if (d == DBL_MAX)
        invalid_input("double is DBL_MAX or above DBL_MAX");
    c = static_cast<char>(d);
    i = static_cast<int>(d);
    f = static_cast<float>(d);
    ft_display_conversion(str, c, i, d, f);
}

void ft_convert_float(char *str)
{
    char    c;
    int     i;
    double  d;
    float   f;
    std::string strstr;

    strstr = str;
    f = atof(str);
    if (f == FLT_MIN)
        invalid_input("float is FLT_MIN or below FLT_MIN");
    if (f == FLT_MAX)
        invalid_input("float is FLT_MAX or above FLT_MAX");
    c = static_cast<char>(f);
    i = static_cast<int>(f);
    d = static_cast<double>(f);
    ft_display_conversion(str, c, i, d, f);
}

int main (int argc, char **argv)
{
    std::string     type;

    if (argc == 2)
    {
        type = ft_detect_type(argv[1]);
        if (type.compare("char") == 0)
            ft_convert_char(argv[1]);
        else if (type.compare("int") == 0)
            ft_convert_int(argv[1]);
        else if (type.compare("double") == 0)
            ft_convert_double(argv[1]);
        else if (type.compare("float") == 0)
            ft_convert_float(argv[1]);
    }
    else
        std::cout << "Error : 1 argument needed" << std::endl;
    return 0;
}