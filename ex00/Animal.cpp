/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:10 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:06:37 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
  std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
  std::cout << "Animal Copy Constructor called" << std::endl;
  *this = other;
}

Animal &Animal::operator=(const Animal &other) {
  std::cout << "Animal Assignation Operator called" << std::endl;
  this->type = other.type;
  return (*this);
}

Animal::~Animal(void) {
  std::cout << "Animal Destructor called" << std::endl;
}
