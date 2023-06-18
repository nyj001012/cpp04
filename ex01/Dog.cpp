/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:30:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:55:59 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
  std::cout << "Dog Constructor called" << std::endl;
  this->type = "Dog";
  brain = new Brain();
}

Dog::Dog(const Dog &other) {
  std::cout << "Dog Copy Constructor called" << std::endl;
  *this = other;
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog Assignation Operator called" << std::endl;
  this->type = other.type;
  return (*this);
}

Dog::~Dog(void) {
  std::cout << "Dog Destructor called" << std::endl;
  delete brain;
}

/**
 * @brief Make sound of Dog
 */
void Dog::makeSound(void) const {
  std::cout << "Dog barks" << std::endl;
}
