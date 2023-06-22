/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:25:27 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:26:27 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal() {
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

std::string Cat::getType() const {
  return (this->type);
}

std::string Cat::getIdea(int idx) const {
  return (this->brain->getIdea(idx));
}

void Cat::setIdea(int idx, std::string idea) {
  this->brain->setIdea(idx, idea);
}
