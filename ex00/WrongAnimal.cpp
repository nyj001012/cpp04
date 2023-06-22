/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:32:51 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:57:49 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
  std::cout << F_RED << "[ WrongAnimal ] " << FB_DEFAULT
            << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << F_RED << "[ WrongAnimal ] " << FB_DEFAULT
            << "WrongAnimal Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  std::cout << F_RED << "[ WrongAnimal ] " << FB_DEFAULT
            << "WrongAnimal Assignation Operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << F_RED << "[ WrongAnimal ] " << FB_DEFAULT
            << "WrongAnimal Destructor called" << std::endl;
}

/**
 * @brief Make sound of WrongAnimalz
 */
void WrongAnimal::makeSound(void) const {
  std::cout << F_RED << "[ WrongAnimal ] " << FB_DEFAULT
            << "WrongAnimal makes no sound" << std::endl;
}

std::string WrongAnimal::getType(void) const {
  return (this->_type);
}
