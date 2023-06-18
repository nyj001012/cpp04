/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:34:55 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:35:55 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
  std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
  std::cout << "WrongCat Copy Constructor called" << std::endl;
  *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  std::cout << "WrongCat Assignation Operator called" << std::endl;
  this->type = other.type;
  return (*this);
}

WrongCat::~WrongCat(void) {
  std::cout << "WrongCat Destructor called" << std::endl;
}

/**
 * @brief Make sound of WrongCat
 */
void WrongCat::makeSound(void) const {
  std::cout << "WrongCat meows" << std::endl;
}
