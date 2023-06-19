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
  std::cout << "AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
  std::cout << "AAnimal Copy Constructor called" << std::endl;
  *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
  std::cout << "AAnimal Assignation Operator called" << std::endl;
  this->type = other.type;
  return (*this);
}

AAnimal::~AAnimal(void) {
  std::cout << "AAnimal Destructor called" << std::endl;
}

/**
 * @brief Make sound of AAnimal
 */
void AAnimal::makeSound(void) const {
  std::cout << "AAnimal makes no sound" << std::endl;
}

std::string AAnimal::getType(void) const {
  return (this->type);
}
