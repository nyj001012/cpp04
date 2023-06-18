/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:32:51 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:34:29 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
  std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "WrongAnimal Copy Constructor called" << std::endl;
  *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  std::cout << "WrongAnimal Assignation Operator called" << std::endl;
  this->type = other.type;
  return (*this);
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal Destructor called" << std::endl;
}

/**
 * @brief Make sound of WrongAnimalz
 */
void WrongAnimal::makeSound(void) const {
  std::cout << "WrongAnimal makes no sound" << std::endl;
}
