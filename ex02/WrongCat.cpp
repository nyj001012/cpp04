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
  std::cout << F_MAGENTA << "[ WrongCat ] " << FB_DEFAULT
            << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
  std::cout << F_MAGENTA << "[ WrongCat ] " << FB_DEFAULT
            << "WrongCat Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  std::cout << F_MAGENTA << "[ WrongCat ] " << FB_DEFAULT
            << "WrongCat Assignation Operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

WrongCat::~WrongCat(void) {
  std::cout << F_MAGENTA << "[ WrongCat ] " << FB_DEFAULT
            << "WrongCat Destructor called" << std::endl;
}

/**
 * @brief Make sound of WrongCat
 */
void WrongCat::makeSound(void) const {
  std::cout << F_MAGENTA << "[ WrongCat ] " << FB_DEFAULT
            << "WrongCat meows" << std::endl;
}
