/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/18 13:01:44 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "WRONG INPUT - Usage <name> <grade> <target>" << std::endl;
        return 1;
    }
    std::string input_name = (std::string) argv[1];
    int         input_grade = atoi(argv[2]);
    std::string input_target = (std::string) argv[3];
  
// Creating a bureaucrat
    bureaucratCreationIntroduction(input_name, input_grade);
    Bureaucrat Inst(input_name, input_grade);
    std::cout   << Inst << std::endl;
    
// Create Shrubbery form
    formCreationIntroduction("SHRUBBERYCREATIONFORM", "SHR_00", input_target);
    ShrubberyCreationForm SHR_00("SHR_00", input_target);
    std::cout   << SHR_00 << std::endl; 
        
// Sign Shrubbery form
    // signatureIntroduction(input_name, "SHR_00");
    Inst.signForm(SHR_00);
    std::cout   << SHR_00 << std::endl;
            
// Execute Shrubbery form        
    // executionIntroduction(input_name, "SHR_00");
    Inst.executeForm(SHR_00);

// Create RobotomyRequest form
    formCreationIntroduction("ROBOTOMYREQUESTFORM", "ROB_00", input_target);
    RobotomyRequestForm ROB_00("ROB_00", input_target);
    std::cout   << ROB_00 << std::endl; 
        
// Sign RobotomyRequest form
    // signatureIntroduction(input_name, "ROB_00");
    Inst.signForm(ROB_00);
    std::cout   << ROB_00 << std::endl;
            
// Execute RobotomyRequest form 
    // executionIntroduction(input_name, "ROB_00");
    Inst.executeForm(ROB_00);

// Create PresidentialPardon form
    formCreationIntroduction("PRESIDENTIALPARDONFORM", "PRE_00", input_target);
    PresidentialPardonForm PRE_00("PRE_00", input_target);
    std::cout   << PRE_00 << std::endl; 
        
// Sign PresidentialPardon form
    // signatureIntroduction(input_name, "PRE_00");
    Inst.signForm(PRE_00);
    std::cout   << PRE_00 << std::endl;
            
// Execute PresidentialPardon form
    // executionIntroduction(input_name, "PRE_00");
    Inst.executeForm(PRE_00);
  
    return 0;
}

