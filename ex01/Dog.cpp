/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:30:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 14:01:40 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
  std::cout << F_CYAN << "[ Dog ] " << FB_DEFAULT
            << "Dog Constructor called" << std::endl;
  this->_type = "Dog";
  this->_brain = new Brain();
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
  this->_brain = other._brain;
  return (*this);
}

Dog::~Dog(void) {
  delete this->_brain;
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

std::string Dog::getIdea(int idx) const {
  return (this->_brain->getIdea(idx));
}

void Dog::setIdea(int idx, std::string idea) {
  this->_brain->setIdea(idx, idea);
}
