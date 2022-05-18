/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/18 11:26:39 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void    bureaucratCreationIntroduction(std::string name, int grade)
{
    std::cout   << std::endl
                << "[CREATING BUREAUCRAT "
                << name
                << " WITH GRADE " 
                << grade
                << "]" << std::endl;
}

void    formCreationIntroduction(std::string formType, std::string formName, std::string target)
{
    std::cout   << std::endl
                << "[CREATING "
                << formType
                << " " 
                << formName
                << " WITH TARGET "
                << target
                << "]" << std::endl;
}

void    signatureIntroduction(std::string name, std::string formName)
{
    std::cout   << std::endl
                << "[" 
                << name
                << " SIGNING FORM "
                << formName
                << "]" << std::endl;
}

void    executionIntroduction(std::string name, std::string formName)
{
    std::cout   << std::endl
                << "[" 
                << name
                << " EXECUTING FORM "
                << formName
                << "]" << std::endl;
}

int main (void)
{
    std::string input_name;
    std::string input_grade;
    std::string input_form;
    std::string input_target;
    std::string input_action;

    while(1)
    {    
    // Asking for input
        std::cout << "\nPlease enter Bureaucrat's name: ";
        std::getline(std::cin, input_name);
        std::cout << "\nPlease enter Bureaucrat's grade: ";
        std::getline(std::cin, input_grade);
            
    // Creating a bureaucrat
        bureaucratCreationIntroduction(input_name, atoi(input_grade.c_str()));
        Bureaucrat Inst(input_name, atoi(input_grade.c_str()));
        std::cout   << Inst << std::endl;
        
    // Asking for input
        std::cout << "\nWhich form do you want to create ? (S for 'Shrubbery', R for 'Robotomy') ";
        std::getline(std::cin, input_form);
        std::cout << "\nWhat will be the name of the target? ";
        std::getline(std::cin, input_target);
        
        if(input_form.compare("S") == 0)
        {
    // Create Shrubbery form
            formCreationIntroduction("SHRUBBERYCREATIONFORM", "SHR_00", input_target);
            ShrubberyCreationForm SHR_00("SHR_00", input_target);
            std::cout   << SHR_00 << std::endl; 
            
    // Asking for input
            std::cout << "\nPress 'S' to sign or 'E' to execute ";
            std::getline(std::cin, input_action);
            
            if (input_action.compare("S") == 0)
            {
    // Sign Shrubbery form
                signatureIntroduction(input_name, "SHR_00");
                Inst.signForm(SHR_00);
                std::cout   << SHR_00 << std::endl;
                std::cout << "\nPress 'E' to execute ";
                std::getline(std::cin, input_action);
            }
            if (input_action.compare("E") == 0)
            {
                executionIntroduction(input_name, "SHR_00");
                Inst.executeForm(SHR_00);
            }
            else
                return 1;
        }
        else if(input_form.compare("R") == 0)
        {
            formCreationIntroduction("ROBOTOMYREQUESTFORM", "ROB_00", input_target);
            RobotomyRequestForm ROB_00("ROB_00", input_target);
            std::cout   << ROB_00 << std::endl; 
            
    // Asking for input
            std::cout << "\nPress 'S' to sign or 'E' to execute ";
            std::getline(std::cin, input_action);
            
            if (input_action.compare("S") == 0)
            {
    // Sign RobotomyRequest form
                signatureIntroduction(input_name, "ROB_00");
                Inst.signForm(ROB_00);
                std::cout   << ROB_00 << std::endl;
                std::cout << "\nPress 'E' to execute ";
                std::getline(std::cin, input_action);
            }
            if (input_action.compare("E") == 0)
            {
                executionIntroduction(input_name, "ROB_00");
                Inst.executeForm(ROB_00);
            }
            else
                return 1;
        }
        // else if(input_form.compare("P") == 0)
        // {
        //     formCreationIntroduction("PRESIDENTIALPARDONFORM", "PRE_00", input_target);
        //     PresidentialPardonForm PRE_00("PRE_00", input_target);
        //     std::cout   << PRE_00 << std::endl; 
            
    // // Asking for input
    //         std::cout << "\nPress 'S' to sign or 'E' to execute ";
    //         std::getline(std::cin, input_action);
            
    //         if (input_action.compare("S") == 0)
    //         {
    // // Sign PresidentialPardon form
    //             signatureIntroduction(input_name, "PRE_00");
    //             Inst.signForm(PRE_00);
    //             std::cout   << PRE_00 << std::endl;
    //         }
    //         else if (input_action.compare("E") == 0)
    //         {
    //             Inst.executeForm(PRE_00);
    //         }
    //         else
    //             return 1;
    //     }
        else
            return 1;
    }
    return 0;
}
