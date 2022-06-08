/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:10:39 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/08 11:16:53 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"convert.hpp"

Base * generate(void)
{
    int randomNumber;
    
    srand(time(NULL));
    randomNumber = rand() % 3;
    std::cout << "randomNumber = " << randomNumber << std::endl; 
    if (randomNumber == 0)
        return new A();
    else if (randomNumber == 1)
        return new B();
    else
        return new C();
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) == 0)
    {
        if (dynamic_cast<B*>(p) == 0)
            std::cout << "With pointers : base generated is Base C" << std::endl; 
        else
            std::cout << "With pointers : base generated is Base B" << std::endl; 
    }
    else
        std::cout << "With pointers : base generated is Base A" << std::endl;   
}

void identify(Base& p)
{
    try
    {
        A &base = dynamic_cast<A&>(p);
        p = dynamic_cast<A&>(base);
        std::cout << "With references : base generated is Base A" << std::endl;
    }
    catch(std::exception &)
    {
        try
        {
            B &base = dynamic_cast<B&>(p);
            p = dynamic_cast<B&>(base);
            std::cout << "With references : base generated is Base B" << std::endl;
        }
        catch(std::exception &)
        {
            std::cout << "With references : base generated is Base C" << std::endl; 
        }
    }
}

int main(void)
{
    std::cout << "######################################" << std::endl;
    std::cout << "#         PREVIOUS STATEMENT :       #" << std::endl;
    std::cout << "# If randomnumber is 0, base is    A #" << std::endl;
    std::cout << "# If randomnumber is 1, base is    B #" << std::endl;
    std::cout << "# If randomnumber is 2, base is    C #" << std::endl;
    std::cout << "######################################" << std::endl << std::endl;

    // TEST 1
    Base *test1 = generate();
    identify(test1);
    delete test1;
    std::cout << std::endl;
    sleep(1);
    // TEST 2
    Base *test2 = generate();
    identify(*test2);
    delete test2;
    std::cout << std::endl;
    
    return 0;
}
