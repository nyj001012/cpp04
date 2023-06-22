/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:25:27 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 14:01:14 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
  std::cout << F_BLUE << "[ Cat ] " << FB_DEFAULT
            << "Cat Constructor called" << std::endl;
  this->_type = "Cat";
  this->_brain = new Brain();
}

Cat::Cat(const Cat &other) {
  std::cout << F_BLUE << "[ Cat ] " << FB_DEFAULT
            << "Cat Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << F_BLUE << "[ Cat ] " << FB_DEFAULT
            << "Cat Assignation Operator called" << std::endl;
  this->_type = other._type;
  this->_brain = other._brain;
  return (*this);
}

Cat::~Cat(void) {
  delete this->_brain;
  std::cout << F_BLUE << "[ Cat ] " << FB_DEFAULT
            << "Cat Destructor called" << std::endl;
}

/**
 * @brief Make sound of Cat
 */
void Cat::makeSound(void) const {
  std::cout << F_BLUE << "[ Cat ] " << FB_DEFAULT
            << "Cat meows" << std::endl;
}

std::string Cat::getIdea(int idx) const {
  return (this->_brain->getIdea(idx));
}

void Cat::setIdea(int idx, std::string idea) {
  this->_brain->setIdea(idx, idea);
}
