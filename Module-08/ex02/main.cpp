/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/16 15:54:47 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"
#include <vector>

int main()
{
// TEST 1
    std::cout << "\033[32m### TESTING MY MUTANTSTACK\033[37m" << std::endl;
    MutantStack<int> mymutantstack;
    MutantStack<int>::iterator it;
    MutantStack<int>::iterator ite;
    
    
    std::cout << "Is my stack empty ? (1 = Yes, 0 = No) = " << mymutantstack.empty() << std::endl;
    std::cout << "Adding -1, 666666666 and 1" << std::endl;
    mymutantstack.push(-1);
    mymutantstack.push(666666666);
    mymutantstack.push(1);
    std::cout << "Is my stack empty ? (1 = Yes, 0 = No) = " << mymutantstack.empty() << std::endl;
    std::cout << "My stack's top = " << mymutantstack.top() << std::endl;
    std::cout << "My stack size  = " << mymutantstack.size() << std::endl;
    std::cout << "Popping from my stack " << std::endl;
    mymutantstack.pop();
    std::cout << "My stack's top = " << mymutantstack.top() << std::endl;
    std::cout << "My stack size  = " << mymutantstack.size() << std::endl;
    std::cout << "Adding 0" << std::endl;
    mymutantstack.push(0);
    std::cout << "My stack's top = " << mymutantstack.top() << std::endl;
    std::cout << "My stack size  = " << mymutantstack.size() << std::endl;
    it = mymutantstack.begin();
    ite = mymutantstack.end();
    std::cout << "My stack elements are: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    MutantStack<int> mysecondmutantstack(mymutantstack);
    std::cout << "mysecondmutantstack copied from mymutantstack" << std::endl;
    MutantStack<int>::iterator its = mysecondmutantstack.begin();;
    MutantStack<int>::iterator ites = mysecondmutantstack.end();;
    std::cout << "My second stack elements are: " << std::endl;
    while (its != ites)
    {
        std::cout << *its << std::endl;
        ++its;
    }

// TEST 2
    std::cout << "\033[32m### TESTING VECTOR\033[37m" << std::endl;
    std::vector<int> myvector;
    std::vector<int>::iterator vit;
    std::vector<int>::iterator vite;
    
    std::cout << "Is the vector empty ? (1 = Yes, 0 = No) = " << myvector.empty() << std::endl;
    std::cout << "Adding -1, 666666666 and 1" << std::endl;
    myvector.push_back(-1);
    myvector.push_back(666666666);
    myvector.push_back(1);
    std::cout << "Is the vector empty ? (1 = Yes, 0 = No) = " << myvector.empty() << std::endl;
    std::cout << "Vector's top = " << myvector.back() << std::endl;
    std::cout << "Vector size  = " << myvector.size() << std::endl;
    std::cout << "Popping from Vector " << std::endl;
    myvector.pop_back();
    std::cout << "Vector's top = " << myvector.back() << std::endl;
    std::cout << "Vector size  = " << myvector.size() << std::endl;
    std::cout << "Adding 0" << std::endl;
    myvector.push_back(0);
    std::cout << "Vector's top = " << myvector.back() << std::endl;
    std::cout << "Vector size  = " << myvector.size() << std::endl;
    vit = myvector.begin();
    vite = myvector.end();
    std::cout << "Vector elements are: " << std::endl;
    while (vit != vite)
    {
        std::cout << *vit << std::endl;
        ++vit;
    }

    std::vector<int> secondvector(myvector);
    std::cout << "secondvector copied from vector" << std::endl;
    std::vector<int>::iterator vits = secondvector.begin();;
    std::vector<int>::iterator vites = secondvector.end();;
    std::cout << "Second vector elements are: " << std::endl;
    while (vits != vites)
    {
        std::cout << *vits << std::endl;
        ++vits;
    }

// TEST3
    std::cout << "\033[32m### TESTING LIST\033[37m" << std::endl;
    std::list<int> mylist;
    std::list<int>::iterator lit;
    std::list<int>::iterator lite;
    
    std::cout << "Is the list empty ? (1 = Yes, 0 = No) = " << mylist.empty() << std::endl;
    std::cout << "Adding -1, 666666666 and 1" << std::endl;
    mylist.push_back(-1);
    mylist.push_back(666666666);
    mylist.push_back(1);
    std::cout << "Is the list empty ? (1 = Yes, 0 = No) = " << mylist.empty() << std::endl;
    std::cout << "list's top = " << mylist.back() << std::endl;
    std::cout << "list size  = " << mylist.size() << std::endl;
    std::cout << "Popping from list " << std::endl;
    mylist.pop_back();
    std::cout << "list's top = " << mylist.back() << std::endl;
    std::cout << "list size  = " << mylist.size() << std::endl;
    std::cout << "Adding 0" << std::endl;
    mylist.push_back(0);
    std::cout << "list's top = " << mylist.back() << std::endl;
    std::cout << "list size  = " << mylist.size() << std::endl;
    lit = mylist.begin();
    lite = mylist.end();
    std::cout << "list elements are: " << std::endl;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }

    std::list<int> secondlist(mylist);
    std::cout << "secondlist copied from list" << std::endl;
    std::list<int>::iterator lits = secondlist.begin();;
    std::list<int>::iterator lites = secondlist.end();;
    std::cout << "Second list elements are: " << std::endl;
    while (lits != lites)
    {
        std::cout << *lits << std::endl;
        ++lits;
    }

    return 0;
}
