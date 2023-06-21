/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:08:08 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:52:12 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "Ice Constructor called" << std::endl;
  this->_type = "ice";
}

Ice::Ice(const Ice &other) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "Ice Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Ice &Ice::operator=(const Ice &other) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "Ice Assignation Operator called" << std::endl;
  return (*this);
}

Ice::~Ice(void) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "Ice Destructor called" << std::endl;
}

/**
 * @brief Use ice
 * @param target
 */
void Ice::use(int &target) {
    std::cout << F_CYAN << "* shoots an ice bolt at "
              << target << " *" << FB_DEFAULT << std::endl;
}

/**
 * @brief Clone Ice
 * @return
 */
AMateria *Ice::clone(void) const {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "Ice clone called" << std::endl;
  return (new Ice());
}
