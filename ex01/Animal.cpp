/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:10 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 14:00:52 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "Animal Copy Constructor called" << std::endl;
  *this = other;
}

Animal &Animal::operator=(const Animal &other) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "Animal Assignation Operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

Animal::~Animal(void) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "Animal Destructor called" << std::endl;
}

/**
 * @brief Make sound of Animal
 */
void Animal::makeSound(void) const {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "Animal makes no sound" << std::endl;
}

std::string Animal::getType(void) const {
  return (this->_type);
}
