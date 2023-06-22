/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:08:08 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:57:00 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "default constructor called" << std::endl;
  this->_type = "ice";
}

Ice::Ice(const Ice &other) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "copy constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Ice &Ice::operator=(const Ice &other) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "assignation operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

Ice::~Ice(void) {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "destructor called" << std::endl;
}

/**
 * @brief Use ice
 * @param target
 */
void Ice::use(ICharacter &target) {
    std::cout << F_CYAN << "* shoots an ice bolt at "
              << target.getName() << " *" << FB_DEFAULT << std::endl;
}

/**
 * @brief Clone Ice
 * @return
 */
AMateria *Ice::clone(void) const {
  std::cout << F_CYAN << "[ Ice ] " << FB_DEFAULT
            << "clone called" << std::endl;
  return (new Ice());
}
