/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:10 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:38:39 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "AAnimal Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "AAnimal Assignation Operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

AAnimal::~AAnimal(void) {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "AAnimal Destructor called" << std::endl;
}

/**
 * @brief Make sound of AAnimal
 */
void AAnimal::makeSound(void) const {
  std::cout << F_YELLOW << "[ Animal ] " << FB_DEFAULT
            << "AAnimal makes no sound" << std::endl;
}

std::string AAnimal::getType(void) const {
  return (this->_type);
}
