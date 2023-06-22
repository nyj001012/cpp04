/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:30:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:51:56 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
  std::cout << F_CYAN << "[ Dog ] " << FB_DEFAULT
            << "Dog Constructor called" << std::endl;
  this->_type = "Dog";
}

Dog::Dog(const Dog &other) {
  std::cout << F_CYAN << "[ Dog ] " << FB_DEFAULT
            << "Dog Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << F_CYAN << "[ Dog ] " << FB_DEFAULT
            << "Dog Assignation Operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

Dog::~Dog(void) {
  std::cout << F_CYAN << "[ Dog ] " << FB_DEFAULT
            << "Dog Destructor called" << std::endl;
}

/**
 * @brief Make sound of Dog
 */
void Dog::makeSound(void) const {
  std::cout << F_CYAN << "[ Dog ] " << FB_DEFAULT
            << "Dog barks" << std::endl;
}
