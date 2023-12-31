/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:25:27 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:54:42 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
  std::cout << F_BLUE << "[ Cat ] " << FB_DEFAULT
            << "Cat Constructor called" << std::endl;
  this->_type = "Cat";
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
  return (*this);
}

Cat::~Cat(void) {
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
