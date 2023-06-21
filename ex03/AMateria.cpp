/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:04:51 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 22:05:32 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
  std::cout << F_YELLOW << "[ AMateria ]" << FB_DEFAULT
            << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
  std::cout << F_YELLOW << "[ AMateria ]" << FB_DEFAULT
            << "AMateria Constructor called" << std::endl;
  this->_type = type;
}

AMateria::AMateria(const AMateria &other) {
  std::cout << F_YELLOW << "[ AMateria ]" << FB_DEFAULT
            << "AMateria Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other) {
  std::cout << F_YELLOW << "[ AMateria ]" << FB_DEFAULT
            << "AMateria Assignation Operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

AMateria::~AMateria(void) {
  std::cout << F_YELLOW << "[ AMateria ]" << FB_DEFAULT
            << "AMateria Destructor called" << std::endl;
}

/**
 * @brief Get type of AMateria
 * @return std::string
 */
std::string const &AMateria::getType(void) const {
  return (this->_type);
}

/**
 * @brief Use materia
 * @param target
 */
void AMateria::use(ICharacter &target) {
  std::cout << F_YELLOW << "[ AMateria ]" << FB_DEFAULT
            << "AMateria use called with " << target.getName() << std::endl;
}
