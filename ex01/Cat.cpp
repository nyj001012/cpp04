/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:25:27 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:56:51 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
  std::cout << "Cat Constructor called" << std::endl;
  this->type = "Cat";
  brain = new Brain();
}

Cat::Cat(const Cat &other) {
  std::cout << "Cat Copy Constructor called" << std::endl;
  *this = other;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat Assignation Operator called" << std::endl;
  this->type = other.type;
  this->brain = new Brain(*other.brain);
  return (*this);
}

Cat::~Cat(void) {
  std::cout << "Cat Destructor called" << std::endl;
  delete brain;
}

/**
 * @brief Make sound of Cat
 */
void Cat::makeSound(void) const {
  std::cout << "Cat meows" << std::endl;
}
