/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/19 15:19:51 by cproesch         ###   ########.fr       */
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
    Inst.signForm(SHR_00);
    std::cout   << SHR_00 << std::endl;
            
// Execute Shrubbery form        
    Inst.executeForm(SHR_00);

// Create RobotomyRequest form
    formCreationIntroduction("ROBOTOMYREQUESTFORM", "ROB_00", input_target);
    RobotomyRequestForm ROB_00("ROB_00", input_target);
    std::cout   << ROB_00 << std::endl; 
        
// Sign RobotomyRequest form
    Inst.signForm(ROB_00);
    std::cout   << ROB_00 << std::endl;
            
// Execute RobotomyRequest form 
    Inst.executeForm(ROB_00);

// Create PresidentialPardon form
    formCreationIntroduction("PRESIDENTIALPARDONFORM", "PRE_00", input_target);
    PresidentialPardonForm PRE_00("PRE_00", input_target);
    std::cout   << PRE_00 << std::endl; 
        
// Sign PresidentialPardon form
    Inst.signForm(PRE_00);
    std::cout   << PRE_00 << std::endl;
            
// Execute PresidentialPardon form
    Inst.executeForm(PRE_00);
  
    return 0;
}

