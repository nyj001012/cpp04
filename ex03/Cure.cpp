/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:09:32 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:56:17 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "default constructor called" << std::endl;
  this->_type = "cure";
}

Cure::Cure(const Cure &other) {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "copy constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Cure &Cure::operator=(const Cure &other) {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "assignation operator called" << std::endl;
  this->_type = other._type;
  return (*this);
}

Cure::~Cure(void) {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "destructor called" << std::endl;
}

/**
 * @brief Use cure
 * @param target
 */
void Cure::use(ICharacter &target) {
  std::cout << F_MAGENTA << "* heals "
            << target.getName() << "'s wounds *" << FB_DEFAULT << std::endl;
}

/**
 * @brief Clone cure
 * @return AMateria*
 */
AMateria *Cure::clone() const {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "clone called" << std::endl;
  return (new Cure());
}
